from flask import Flask, render_template, request
from flask_socketio import SocketIO, emit
import json

# Utilizing the below links,
# https://flask-socketio.readthedocs.io/en/latest/intro.html#installation 
# https://flask-socketio.readthedocs.io/en/latest/getting_started.html
# https://pythonprogramminglanguage.com/python-flask-websocket/
# https://medium.com/@abhishekchaudhary_28536/building-apps-using-flask-socketio-and-javascript-socket-io-part-1-ae448768643

### And a little bit of this just to understand how Flask works:
# https://www.techwithtim.net/tutorials/flask/http-methods-get-post/
host_ = "0.0.0.0"
port_ = 5000

app = Flask(__name__)
socketio = SocketIO(app)

greenArrowData = {} # Starting and ending points of the vector, Velocity, and GUID (unique reference number to that green Arrow)
carData = {1: ([0, 0], [0, 0])} # position and velocity of cars with an associated GUID
connectedUsers = {} # Users that are connected given an ID

# def getOpenCVInfo():
#     sampleJson = json.loads('{"Car ID": 1, "posX": 10, "posY": 20, "velX": 0.2, "velY": 0.0}')
#     sampleData = json.dumps(sampleJson)
#     return sampleData

@app.route("/", methods = ["GET", "POST"])
def index():
    return "<p>Welcome to the Flask HTTP/Flask-SocketIO server. You are on the root-page that's being managed by the HTTP side of the Flask framework.</p>"

@app.route("/debug", methods = ["GET"])
def debugView():
    return f"<p>Green Arrow Data: \n\t{greenArrowData}\nCar data: \n\t{carData}\nUsers Connected: \n\t{connectedUsers}\n</p>"

### For three-way handshake on new connection
### Client must use socketIO in either javascript or python to connect and must implement socket.on('handshake', (msg) => {}) and socket.on('after connect', (msg) => {})
### in order to complete the handshake. For debugging purposes, data messages are included in these connection events.
### msg data can be accessed by both the server and the client through msg.data

### All clients should have an event for "updated data" so that the car

@socketio.on('connect')
def connectionHandshake():
    print("User has connected")
    emit('handshake client', {'data': 'Ack from server, waiting on client handshake ack'})

@socketio.on('handshake')
def connectionConfirmed(msg):
    print(msg.data)
    emit('after connect', {'data': "Ack from client received, three-way handshake complete, 200 OK"})

### This event will be invoked by the openCV module to update the data on the serverside and to invoke an update 
### across all connected users
@socketio.on('update green-arrow data')
def updateSystemData(new_GreenArrow_And_CarData):
    global greenArrowData, carData
    greenArrowData = new_GreenArrow_And_CarData[0]
    carData = new_GreenArrow_And_CarData[1]
    #dataToSend = json.loads(new_GreenArrow_And_CarData) ### Don't know if this is better than sending two separate jsons
    carDataJSON = json.loads(carData)
    greenArrowDataJSON = json.loads(greenArrowData)
    emit("data update", data=(greenArrowDataJSON, carDataJSON), broadcast=True) ### broadcast sends the message to all clients connected to the server
    
@socketio.on('disconnect')
def disconnectConfirmed():
    print("User has disconnected")

if __name__ == "__main__":
    socketio.run(app, port=port_, host=host_) # We can change the port on which we end up hosting if necessary
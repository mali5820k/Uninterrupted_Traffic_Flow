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

TRAFFIC_LIGHT_PERIOD = 10

app = Flask(__name__)
socketio = SocketIO(app, cors_allowed_origins="*")

greenArrowData = {} # Starting and ending points of the vector, Velocity, and GUID (unique reference number to that green Arrow)
carData = "{}" # position and velocity of cars with an associated GUID
connectedUsers = {} # Users that are connected given an ID

@app.route("/", methods = ["GET", "POST"])
def index():
    return "<!DOCTYPE html><html><head><title>Central Server</title></head><body><h1>Maximum Uninterrupted Traffic Flow</h1><p>Welcome to the Flask HTTP/Flask-SocketIO server. You are on the root-page that's being managed by the HTTP side of the Flask framework.</p><br><a href=\"/debug\"><button>Debug View</button></a></body></html>"

@app.route("/debug", methods = ["GET"])
def debugView():
    return f"<!DOCTYPE html><html><head><title>Central Server &rsaquo; Debug</title></head><body><h1>Maximum Uninterrupted Traffic Flow</h1><h2>Debug View</h2><a href=\"/\"><button>Home Page</button></a> <a href=\"javascript:location.reload(true)\"><button>Refresh Data</button></a><br> <a href=\"javascript:fetch('/sync')\"><button>Send Traffic Light Synchronization Signal</button></a> <a href=\"javascript:fetch('/update')\"><button>Manually Push Stale Data Update</button></a><br><p>Green Arrow Data:</p><samp>{greenArrowData}</samp><br><br><p>Car data:</p><samp>{carData}</samp><br><br><p>Users Connected:</p><samp>{connectedUsers}</samp></body></html>"

@app.route("/sync", methods = ["GET"])
def syncPath():
    socketio.emit("synchronization", broadcast=True)
    return "ok"

@app.route("/update", methods = ["GET"])
def pushUpdate():
    carDataJSON = json.loads(carData)
    packagedData = {
            "carData": carDataJSON,
            "lightPeriod": TRAFFIC_LIGHT_PERIOD
            }
    socketio.emit("data update", packagedData, broadcast=True) ### broadcast sends the message to all clients connected to the server
    print(f"Manually updated data. carData: {carData}")
    return "ok"

@socketio.on('update green-arrow data')
def updateSystemData(new_GreenArrow_And_CarData): # This param is a tuple or list of the two dictionaries
    global greenArrowData, carData

    # The two dictionaries are split into two separate variables
    newData = new_GreenArrow_And_CarData
    carData = newData['carData']

    # The two dictionaries are loaded up into JSON's and sent to the server via an emitted event
    carDataJSON = json.loads(carData)
    packagedData = {
            "carData": carDataJSON,
            "lightPeriod": TRAFFIC_LIGHT_PERIOD
            }
    emit("data update", packagedData, broadcast=True) ### broadcast sends the message to all clients connected to the server

@socketio.on('disconnect')
def disconnectConfirmed():
    print("User has disconnected")

if __name__ == "__main__":
    socketio.run(app, port=port_, host=host_) # We can change the port on which we end up hosting if necessary

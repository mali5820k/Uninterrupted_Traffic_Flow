import json as json
#import socketio_client
import socketio

# This is a file to send all OpenCV related data from the OpenCV module to the WebSocket server
# for interfacing with the front-end (the app).

# The port and host_ fields should match those of the server from app.py
port = 5000
host_= "0.0.0.0"

def setup():
    global sio
    sio = socketio.Client()
    sio.connect(f'http://{host_}:{port}')

@sio.on('handshake client')
def handshake_handler(data):
    print(data)
    sio.emit('handshake', )

@sio.on('after connect')
def successful_connection_handshake(data):
    print(data)
    print("OpenCV Module to server is Ready to go!")

@sio.event
def connect_error(data):
    print("Connection failed")

@sio.event
def disconnect():
    print("OpenCV module to server disconnected")

def sendCarLocalizationDataToServer(dataDictionary):
    generatedJson = json.dumps(dataDictionary)
    sio.emit("update green-arrow data", generatedJson)
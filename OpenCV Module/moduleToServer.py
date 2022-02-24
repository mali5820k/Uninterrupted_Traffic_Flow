import json as json
import socketio_client
# This is a file to send all OpenCV related data from the OpenCV module to the WebSocket server
# for interfacing with the front-end (the app).

def sendCarLocalizationDataToServer(dataDictionary):
    generatedJson = json.dumps(dataDictionary)

    

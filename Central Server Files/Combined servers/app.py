from crypt import methods
from flask import Flask
from flask import render_template
from flask import request
import json

# Base was used from MIT licensed code from websockets repo
import websocket_server as ws
from websocket_server import WebsocketServer

# This is the flask server code below:
app = Flask(__name__)

def getOpenCVInfo():
    sampleJson = json.loads('{"Car ID": 1, "posX": 10, "posY": 20, "velX": 0.2, "velY": 0.0}')
    sampleData = json.dumps(sampleJson)
    return sampleData

@app.route("/")
def hello_world():
    return "<p>Index Page</p>"

@app.route("/websocket_portal", methods=["GET", "POST"])
def websocket_Page():
    return 

@app.route("/openCV_Info", methods=["GET", "POST"])
def openCVPage():
    if request.method == "GET":
        return render_template('OpenCV.html', data=getOpenCVInfo())
    else:
        return "Posting still being implemented 200 OK"

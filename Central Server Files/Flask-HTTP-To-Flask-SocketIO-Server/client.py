import socketio

sio = socketio.Client()

@sio.event('handshake client')
def on_serverACK():
    sio.emit('handshake', {'data': "Ack from client"})
    
@sio.event('after connect')
def after_connectHandler(msg):
    print(f"Message received fromt the server: {msg}")

sio.connect("http://localhost:5000/", wait_timeout = 10)

sio.wait()
sio.disconnect()

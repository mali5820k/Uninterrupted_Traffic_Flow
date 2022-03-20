import socketio

sio = socketio.Client()

sio.connect("localhost:")

@sio.event('handshake')
def on_serverACK():
    sio.emit('handshake', {'data': "Ack from client"})
    
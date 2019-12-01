from socket import *

server_name = 'server_name'
server_port = 12000
client_socket = socket(AF_INET, SOCK_STREAM)
client_socket.connect((server_name, server_port))
sentence = bytes('Hello')
client_socket.send(sentence)
modified_sentence = client_socket.recv(1024)
print(modified_sentence)
client_socket.close()
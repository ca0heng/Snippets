from socket import *

server_name = 'hostname'
server_port = 12000
client_socket = socket(AF_INET, SOCK_DGRAM)
message = 'Hello'
client_socket.sendto(bytes(message), (server_name, server_port))
modified_message, server_address = client_socket.recvfrom(2048)
print(modified_message)
client_socket.close()


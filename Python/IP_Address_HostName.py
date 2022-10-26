import socket;

def host_IP():
    try:
        host_name = socket.gethostname()
        host_ip = socket.gethostbyname(host_name)
        print("Hostname : ",host_name)
        print("IP Address : ",host_ip)
    except:
        print("Unable to get Hostname and IP")


host_IP()
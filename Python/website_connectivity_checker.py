import requests

def check_connection(site):
    status = requests.get(site).status_code
    if status == 200:
        print("Working")
    else:
        print("Not Working")

check_connection(input("Enter Website: "))

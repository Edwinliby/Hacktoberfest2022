print("Choose from below options:")
print("1.Celsius to Fahrenheit.")
print("2.Fahrenheit to Celsius.")
o=int(input("option(1/2):"))
if(o==1):
    c=float(input("Temperature in Celsius:"))
    f=1.8*(c)+32.0
    f=round(f,1) #temperature in fahrenheit precise to 1 decimal place
    print("Temperature in Fahrenheit:",f)
elif(o==2):
    f=float(input("Temperature in Fahrenheit:"))
    c=(f-32)/1.8
    c=round(c,1) #temperature in celsius precise to 1 decimal place
    print("Temperature in Celsius:",c)
else:
    print("Choose 1 or 2.")

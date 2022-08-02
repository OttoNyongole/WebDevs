'''from telnetlib import STATUS
from tkinter import UNITS
from wsgiref import simple_server'''


msg = "Hello World!"
print(msg)
print(msg[::-1]) #str reverse in str operation
print(msg.lower())
print(msg.upper())
print(len(msg)) 
print(msg.lower() .upper())

door_is_locked = False
if door_is_locked:
        print("Mom, open the door!")
else: 
    print("The door is open, enter please!")

    # The area of the square
    side = 6
    Area = side*side
    print("The area of the square is", Area)
# Area of the square by getting input user user
side = int(input("Enter the side of the square"))
Area = side*side
print("the Area of the square =", Area)
print("All measurementts are in metres")

# Area of the square using function
#the Area of the square 
side = 12
Area = side*side
print("the are of the square is:", Area)
print("All measurements are in metres")

#the area of the square using user input
side =int(input("Enter the side:"))
Area = side*side
print("The area of the square is:", Area)
print("All measurements are in metres")

#Area of the square using function
def Areaofsquare(side):
        Area = side*side
        return Area
side = 12
print("The area of the square is:", Area)
#Area of the square using fine from user input
def Areaofsquare(side):
        Area = side*side
        return Area
side = int(input("Enter the side of the square:"))
print("the area of the square is:", Area)



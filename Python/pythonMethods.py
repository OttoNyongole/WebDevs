#for loops
#used to iterate over a sequences (list, tuple, dictionary, set or string)
#for loop can execute a set of statements once for each item in a list tuple set ect

#Print each fruit in a list

"""fruits = ["apple", "banana", "cherry"]
for x in fruits:
    if x == "banana":
        break
    print(x)"""
#The continue statement
fruits = ["apple", "banana", "cherry"]
for x in fruits:
    if x == "banana":
        continue
    print(x)


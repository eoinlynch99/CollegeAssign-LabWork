#Title: Python Lab Test 2
#Name: Eoin Lynch
#Student Number: C16310846
#Date: 06/12/2018

#Imports math for use with square root
import math

#This is a dictionary used to store all the vectors and one for results
vectors = {'v1': (2, 3), 'v2': (5, 9), 'v3': (1, 2), 'v4': (2, 2), 'v5': (7, 5),
           'v6': (6, 12), 'v7': (7, 10)}

results = {'r1': [0, 0], 'r2': [0, 0], 'r3': [0, 0], 'r4': [0], 'r5': [0], 'r6': [0]}


#This is a class used for adding vectors
class Addition:
    results["r1"][0] = vectors["v1"][0] + vectors["v2"][0]
    results["r1"][1] = vectors["v1"][1] + vectors["v2"][1]

    print("v1", vectors["v1"], "plus v2", vectors["v2"], " equals ", results["r1"])


#This is a class used for subtracting vectors
class Subtraction:
    results["r2"][0] = vectors["v3"][0] - vectors["v4"][0]
    results["r2"][1] = vectors["v3"][1] - vectors["v4"][1]

    print("v3", vectors["v3"], "minus v4", vectors["v4"], " equals ", results["r2"])


#This is a class used for multiplication by an int
class MultiplicationByInt:
    input1 = int(input("Please enter a number to multiply by: "))

    results["r3"][0] = vectors["v4"][0] * input1
    results["r3"][1] = vectors["v4"][1] * input1

    print("v4", vectors["v4"], "by n ", input1, " equals ", results["r3"])


#This is a class used for multiplying vectors
class MultiplicationByVectors:
    results["r4"] = (vectors["v5"][0] * vectors["v6"][0]) + (vectors["v5"][1] * vectors["v6"][1])

    print("v5", vectors["v5"], "multiplied by v6", vectors["v6"], "equals", results["r4"])


#This is a class to figure out the vector magnitude
class VectorMagnitude:
    results["r5"] = (vectors["v7"][0] ** 2) + (vectors["v7"][1] ** 2)
    results["r6"] = math.sqrt(results["r5"])

    print("v7", vectors["v7"], " magnitude is equal to", results["r6"])






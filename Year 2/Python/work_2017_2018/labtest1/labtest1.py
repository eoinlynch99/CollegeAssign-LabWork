#Object Oriented Programming - Lab Test 1
#Name - Eoin Lynch
#Student Number - C16210846


#Function for take a number and square the sum of its digits
def sum_squares(str_num1,str_num2):
    num1 = int(str_num1)
    num2 = int(str_num2)
    print(num1,num2)
    result = 0
    number_list = []
    i = 0

    while result != 1 or result != 4:
        num1 = (num1 * num1)
        num2 = (num2 * num2)
        result =str(num1 + num2)
        num1 = int(result[0])
        num2 = int(result[1])
        print(result)
        #number_list[i] = result
        #i += 1

    return result


#Function for printing out all the happy numbers
'''
def happy_list(str_num):
    int_num = int(str_num)
    counter = 0

    while counter < int_num:
        print(str_num[counter], end=", ")
        counter += 1
        
    return str_num
'''

#Main Program
print("This is a program that will find all the happy numbers up to the number you input.")
user_input = input("Please enter the number you wish to use: ")
usrlen = len(user_input)
print(usrlen)
number1 = (user_input[0])
number2 = (user_input[1])
#Passing str_num to sum_squares
num13 = sum_squares(number1, number2)
#Passing str num to happy_list
#num22 = happy_list(str_num)

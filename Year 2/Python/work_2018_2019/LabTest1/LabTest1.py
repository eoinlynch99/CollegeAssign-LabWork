# Python Lab Test
# Eoin Lynch

#Getting user input
str_num = input("Enter a top limit (inclusive and over 10): ")
int_num = int(str_num)

#Sets 10 as the starting number
current_num = 10

print("The Kaprekar numbers from", current_num, "up to", int_num, "are: \n")

#While loop to calculate equation up until current num is equal to top number
while current_num != int_num:
    #Result is the result of multiplying the number by itself
    result = current_num * current_num

    #Makes result a string for slicing
    str_result = str(result)

    #If statement for if the length of the string is even
    if len(str_result) % 2 == 0:
        #Finds half the length of the string for splitting
        str_index = len(str_result) / 2
        int_index = int(str_index)

        #Puts the two halves into variables
        str_num1 = str_result[:int_index]
        str_num2 = str_result[int_index:]

        #Converts the two halves into integers
        int_num1 = int(str_num1)
        int_num2 = int(str_num2)

        #Checks if the two halves add up to the original number
        #If they add up, the number gets printed
        if int_num1 + int_num2 == current_num:
            print(current_num, end=" ")

    #Else statement for if the length of the string is odd
    else:
        #Gets the index by dividing the length of string in two
        index = len(str_result) / 2

        #Converts to an int as an odd length will have a remainder
        #Converting to an int gets rid of this remainder
        int_index = int(index)
        index = str(int_index)

        #This time there are two pairs because since the length is odd
        #Each half is of different length so we need to swap the numbers around

        #Gets the first pair and puts them into variables
        str_num1_1 = str_result[:int_index]
        str_num2_1 = str_result[int_index:]

        #Gets the second pair and puts it into variables
        str_num1_2 = str_result[:(int_index + 1)]
        str_num2_2 = str_result[(int_index + 1):]

        #Converting the first pair to an int
        int_num1_1 = int(str_num1_1)
        int_num2_1 = int(str_num2_1)

        #Converting the second pair to an int
        int_num1_2 = int(str_num1_2)
        int_num2_2 = int(str_num2_2)

        #Checks if either of the pairs are Kaprekar numbers
        #If they are they get printed
        if int_num1_1 + int_num2_1 == current_num or int_num1_2 + int_num2_2 == current_num:
            print(current_num, end=" ")

    #Incremenents the number that's being worked on
    current_num += 1

#Week 3 Lab Exercise 1
#Checking if a string is a Palindrome

#Imports the string module
import string

#Sets string.punctuation and string.whitespace to variables to use
punctuation = string.punctuation
whitespace = string.whitespace

#my_str is the variable that will be printed
my_str = input("Enter a string: ")
#my_str2 is the string that will be manipulated
my_str2 = my_str

#no_punct is a string with no punctuation
no_punct = ""
#no_space is a string without whitespaces
no_space = ""

#removes punctuation
for char in my_str2:
    if char not in punctuation:
        no_punct = no_punct + char

#removes whitespace
for char in no_punct:
    if char not in whitespace:
        no_space = no_space + char

#puts no_space into my_str2
my_str2 = no_space

#makes the sentence lowercase
my_str2 = str.lower(no_space)

#reverses the string
str_reversed = my_str2[::-1]

#checks if string is a palindrome
if str_reversed == my_str2:
    print(my_str, "is a palindrome.")
else:
    print(my_str, "is not a palindrome.")

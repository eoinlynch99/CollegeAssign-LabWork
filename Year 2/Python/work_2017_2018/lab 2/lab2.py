# Python program to check if a word is a palindrome
my_str=input("Enter a string: ")

string_reversed = my_str[::-1]

if string_reversed == my_str:
    print(my_str, "is a palindrome.")
else:
    print(my_str, "is not a palindrome.")
# Program that converts decimal integer to binary, and the binary back to int.
# Then the program converts a decimal number to any base up to 9, and to coverts it back to decimal.
# Program then prompts the user for the decimal number and for the base.


input_str = input("Enter a number to convert to binary and then back to decimal: ")
base_str = input("Enter a base: ")
input_int = int(input_str)
base_int = int(base_str)
binary = ' '
i = 1

if int(input_int) == 0:
    print("Decimal value 0 in binary is 0")

if int(input_int) <= 0:
    print("The decimal number you have entered is negative.")

while input_int > 0:

    binary = str(input_int % base_int) + binary
    input_int = int(input_int / base_int)


print("Decimal number", input_str," in binary is", binary)

bin_int = (binary, base_int)
print("Conversion is:", bin_int)

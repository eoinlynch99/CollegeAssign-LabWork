input_str = input("Please enter text to scramble: ")
temp = ''
i = 1

for char in input_str:
    if input_str[i] and input_str[i+1] != '.' and ' ' and ',' and '!':
        temp = input_str[i]
        input_str[i] = input_str[i+1]
        input_str[i+1] = temp

        i += 1
    else:
        i += 1

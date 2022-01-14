#Program to output ABC Music Notation in a readable form
#Eoin Lynch
#29/11/2018

while open("hnr.abc"):
    num = 'a'
    num2 = 'b'
    num3 = 'c'
    num4 = 'd'

    while num is 'a':
        line = f.readline()
        if "X:" in line: print(line, " ... ")
        num = 'A'

    while num2 == 'b':
        line = fp.readline()
        if "T:" in line: print(line, " ... ")
        num2 = 'B'

    while num3 == 'c':
        line = fp.readline()
        if "T:" in line: print(line, " ... ")
        num3 = 'C'

    while num4 == 'd':
        line = fp.readline()
        if "T:" in line: print(line, " ... ")
        num4 = 'D'


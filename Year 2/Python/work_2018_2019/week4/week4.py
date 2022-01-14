#Week 4 Lab Exercise
#Hangman game

wordlist = "python"
hidden = "******"
guess = ""
lives = 5
position = 0

print("Welcome to hangman. You have 5 lives. \nGood Luck!")

while lives > 0 and hidden != wordlist:
    print(hidden)
    guess = input("Please enter a letter: ")
    guess = str.lower(guess)

    position = 0

    for char in wordlist:
        if guess not in wordlist:
            position += 1
            if position == 6:
                lives -= 1
                print("Wrong! Try again!")
                print("You have ", lives, " lives left!")

        if guess in wordlist:
            position = wordlist.find(guess)
            hidden = hidden[:position] + guess + hidden[position + 1:]

if word == hidden:
    print(hidden)
    print("Congratulations!")
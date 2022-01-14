/*
Program Description: Programming assignment 2
Author(s): Eoin Lynch
Date: 06/03/2017
OS Version(s): Windows 10 (64 bit)
*/

//libraries
#include <stdio.h>
#include <stdlib.h>

//macro definitions
#define SIZE 4

//function prototypes
int option1(int*, int*);
int option2(int*, int*, int*, int*, int*, int*, int*, int*);
void option3(int*, int*);
void option4(int*, int*);

//main function
int main()
{
    //initalisation of variables
    int access_code[SIZE] = {4, 5, 2, 3};
    int input_code[SIZE] = {0, 0, 0, 0};
    int user_code[SIZE] = {0, 0, 0, 0};
    int input_success = 0;
    int input_failure = 0;
    char menu_option = '0';
    int option1_switch = 0;
    int option2_switch = 0;
    int option3_switch = 0;

    //menu with options for user
    printf("1. Enter code \n");
    printf("2. Encrypt code and verify if correct \n");
    printf("3. Decrypt code \n");
    printf("4. Display the number of times the code was entered (i) Successfully (ii) Incorrectly \n");
    printf("5. Exit Program \n");

    do
    {
        //scanf for user to select menu option
        printf("\n \n");
        printf("Please select a menu option \n");
        scanf(" %c", &menu_option);
        printf("\n\n");

        //switch statements with cases for the different options
        switch(menu_option)
        {
            //case for if the user hits enter
            case '\n':
            {
                menu_option = '0';

                break;
            } //end case

            //case for first option
            case '1':
            {
                option1(&input_code, &option1_switch);

                break;
            } //end case

            //case for secod option
            case '2':
            {
                option2(&input_success, &input_failure, &access_code, &input_code, &user_code, &option1_switch, &option2_switch, &option3_switch);

                break;
            } //end case

            //case for third option
            case '3':
            {
                option3(&user_code, &option3_switch);

                break;
            } //end case

            // case for fourth option
            case '4':
            {
                option4(&input_success, &input_failure);

                break;
            } //end case

            //default case for if user does not enter a valid option
            default:
            {
                break;
            } //end default
        } //end switch
    }  //end do

    //while statement that ends program when user enters 5
    while (menu_option != '5');

    //return 0 to end program
    return 0;
} //end main



//function for menu option 1 (entering code)
int option1(int *code_enter, int *option1_switch)
{
    //initialisation of variables
    int i;

    //for loop for entering access code numbers
    for(i=0; i<SIZE; i++)
    {
        printf("Please enter acces code number %d \n", i+1);
        scanf("%d", &*(code_enter+i));
    } //end for

    //incrementing option1_switch
    ++*option1_switch;

    //returns the values for the inputted code
    return &*(code_enter);
    return &*(option1_switch);
} //end option1





//function for menu option 2 (encryption)
int option2(int *success, int *failure, int *access_code, int *code_enter, int *user_access, int *option1_switch, int *option2_switch, int *option3_switch)
{
    //if statement to check if user has entered code
    if(*(option1_switch) == 0)
    {
        printf("Please enter a code before trying to encrypt \n");
    } //end if
    else
    {
        //if statement to check if code is already encrypted
        if(*(option2_switch) == 0)
        {
            //initialisation of variables
            int i;
            int correct_incorrect = 0;
            int buffer_code[SIZE];

            //encryption alrgorithm stage of swapping 1st and third and the 2nd and 4th numbers
            *(buffer_code + 0) = *(code_enter + 2);
            *(buffer_code + 1) = *(code_enter + 3);
            *(buffer_code + 2) = *(code_enter + 0);
            *(buffer_code + 3) = *(code_enter + 1);

            //second stage of encryption where numbers are incremented by 1
            for(i=0; i<SIZE; i++)
            {
                ++*(buffer_code + i);
            } //end for

            //final stage of encryption algorithm where if an element is equal to 10 it is changed to 0
            for(i=0; i<SIZE; i++)
            {
                if(*(buffer_code + i) == 10)
                {
                    *(buffer_code + i) = 0;
                } //end if
            } //end for

            //for loop for checking if code is correct
            for(i=0; i<SIZE; i++)
            {
                if(*(buffer_code + i) == *(access_code + i))
                {
                    correct_incorrect++;
                } //end if
            } //end for

            //if else statement for telling user if code entered is correct
            if(correct_incorrect == 4)
            {
                printf("CORRECT CODE \n");

                ++*success;
            } //end if
            else
            {
                printf("ERROR CODE \n");

                ++*failure;
            } //end else

            //for loop to assign the values of buffer_code to user_accesss
            for(i=0; i<SIZE; i++)
            {
                *(user_access + i) = *(buffer_code + i);
            } //end for

            //incrementing switch for if user tries to encrypt again
            *option2_switch ++;

            //incrementing option3_switch so user can now decrypt
            ++*option3_switch;

            //returning variables
            return &*(success);
            return &*(failure);
            return &*(code_enter);
            return &*(user_access);
            return &*(option2_switch);
            return &*(option3_switch);
        } //end if
        else
        {
            printf("ERROR: Code already encrypted \n");
        } //end else
    } //end else
} //end option2





//function for menu option 3 (decryption)
void option3(int *user_accesss, int *option3_switch)
{
    //if statement to check if code is encrypted
    if(*(option3_switch) > 0)
    {
        //initialisation of variables
        int i;
        int correct_incorrect = 0;
        int buffer1_code[SIZE];
        int buffer2_code[SIZE];

        //for loop for inputting code into first and second buffer
        for(i=0; i<SIZE; i++)
        {
            *(buffer1_code + i) = *(user_accesss + i);
            *(buffer2_code + i) = *(buffer1_code + i);
        } //end for

        //subtracting 1 from each element in buffer1_code and buffer2_code
        for(i=0; i<SIZE; i++)
        {
            --*(buffer1_code + i);
            --*(buffer2_code + i);
        } //end for

        //if an element is equal to -1 have it equal to 9
        for(i=0; i<SIZE; i++)
        {
            if(*(buffer1_code + i) == -1)
            {
                *(buffer1_code + i) = 9;
            } //end if
        } //end for

        //swapping the first number witht he third number and the 2nd number with the fourth number
        *(buffer1_code + 0) = *(buffer2_code + 2);
        *(buffer1_code + 1) = *(buffer2_code + 3);
        *(buffer1_code + 2) = *(buffer2_code + 0);
        *(buffer1_code + 3) = *(buffer2_code + 1);

        //printing the decrypted form of the code
        printf("The decrypted form of the code you entered is %d%d%d%d \n", *(buffer1_code + 0), *(buffer1_code + 1), *(buffer1_code + 2), *(buffer1_code + 3));
    } //end if
    else
    {
        printf("Please encrypt your code before trying to decrypt it \n");
    } // end else
} //end option3





//function for menu option 4 (displaying success and failure)
void option4(int *success, int *failure)
{
    //printing of amount of times code was entered correctly and incorrectly
    printf("The number of times the code was entered correctly is %d \n", *success);
    printf("The number of times the code was entered incorrectly is %d \n", *failure);
} //end option4

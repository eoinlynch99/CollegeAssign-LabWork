/*
Program Description: Code for ATM machine allowing user to enter PIN and verify if correct, allow the user to change PIN,
                     allow user to see how many incorrect and correct attempts and allows user to exit.
Author: Eoin Lynch
Date: 02/11/2016
OS Version: Windows 10 (64 bit)
*/

#include <stdio.h>

#define SIZE 4

int main()
{
    // current pin
    int current_pin[SIZE] = {1, 2, 3, 4};

    // inputted pin
    int inputted_pin[SIZE] = {0, 0, 0, 0};

    // confirmation for inputted pin
    int inputted_pin_confirm[SIZE] = {0, 0, 0, 0};

    // character for selecting option from menu
    char selected_option = '0';

    // integer for showing number of correct attempts
    int num_of_correct_attempts = 0;

    // integer for showing number of incorrect attempta
    int num_of_incorrect_attempts = 0;

    // i integer for inputting into array
    int i = 0;

    // do while to repeat menu and options whilst the option is not 4
    do
    {
        // menu with pin related options
        printf("1. Enter PIN and verify if correct \n");
        printf("2. Change PIN \n");
        printf("3. Display the number of times the PIN was entered (i) Successfully (ii) Incorrectly \n");
        printf("4. Exit Program \n");
        printf("\n");

        printf("Please select an option \n");
        scanf("%c", &selected_option);

        // switch statement for selecting menu options
        switch(selected_option)
        {
            // case statement for \n to stop "You have not inputted a valid entry" from showing after a task has been completed
            case '\n':
            {
                selected_option = '0';

                break;
            } // end case \n

            // case statement for menu option 1 which allows you to enter pin and verify if its correct
            case '1':
            {
                printf("\n");
                printf("Please enter your PIN (press enter after inputting each number) \n");

                // for loop to read number into inputted_pin array
                for (i=0; i<4; i++)
                {
                    scanf("%d", &inputted_pin[i]);
                } // end for

                // if statement to check if the inputted pin is correct
                if ((inputted_pin[0] == current_pin[0]) && (inputted_pin[1] == current_pin[1]) && (inputted_pin[2] == current_pin[2]) && (inputted_pin[3] == current_pin[3]))
                {
                    printf("\n");
                    printf("You have entered the correct PIN \n");
                    printf("\n");
                    num_of_correct_attempts ++;
                } // end if

                // else statement for if inputted pin is incorrect
                else
                {
                    printf("\n");
                    printf("You have not entered the correct PIN \n");
                    printf("\n");
                    num_of_incorrect_attempts ++;
                } // end else

                selected_option = '0';

                break;
            } // end case 1:

            // case for menu option 2 to change pin and confirm new pin
            case '2':
            {
                printf("\n");
                printf("Please enter your new pin (press enter after inputting each number) \n");

                // for loop to read number into inputted_pin array
                for (i=0; i<4; i++)
                {
                    scanf("%d", &inputted_pin[i]);
                } // end for

                printf("\n");
                printf("Please confirm your new pin (press enter after inputting each number) \n");

                // for loop to read number into inputted_pin_confirm array
                for (i=0; i<4; i++)
                {
                    scanf("%d", &inputted_pin_confirm[i]);
                } // end for

                // if statement to confirm new pin is correct
                if ((inputted_pin[0] == inputted_pin_confirm[0]) && (inputted_pin[1] == inputted_pin_confirm[1]) && (inputted_pin[2] == inputted_pin_confirm[2]) && (inputted_pin[3] == inputted_pin_confirm[3]))
                {
                    ((current_pin[0] = inputted_pin[0]) && (current_pin[1] = inputted_pin[1]) && (current_pin[2] = inputted_pin[2]) & (current_pin[3] = inputted_pin[3]));
                    printf("\n");
                    printf ("Your pin has been changed \n");
                    printf("\n");
                } // end if

                // else statement for if pin is incorrect
                else
                {
                    printf("\n");
                    printf("You have not inputted the same PIN for confirmation \n");
                    printf("\n");
                } // end else

                selected_option = '0';

                break;
            } // end case 2

            // case for menu option 3 to show amount of correct and incorrect inputs of pin
            case '3':
            {
                printf("\n");
                printf("The number of correct attempts is %d \n", num_of_correct_attempts);
                printf("The number of incorrect attempts is %d \n", num_of_incorrect_attempts);
                printf("\n");

                selected_option = '0';

                break;
            } // end case 3

            // case for menu option 4 to end program gracefully
            case '4':
            {
                printf("\n");
                printf("Ending program... \n");

                return 0;

                break;
            } // end case 4

            // default statement for if the user does not enter a valid option
            default:
            {
                printf("\n");
                printf("You have not inputted a valid entry \n");
                printf("\n");

                break;
            } // end default

        } // end switch

    } // end do

    while (selected_option != 4);

    return 0;

} // end main

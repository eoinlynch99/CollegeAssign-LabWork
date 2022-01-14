/*
Program Description: Lab test 4
Author: Eoin Lynch
Date: 06/04/2017
OS Version: Windows 10 (64 bit)
*/

//libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//macro definitions
#define SIZE 61

//initialising structure
struct bryanair_rec
{
    char flight_num[SIZE];
	char flight_date[SIZE];
	char pass_surname[SIZE];
    char pass_firstname[SIZE];
	char seat_num[SIZE];
};

//function prototypes
void enter(struct bryanair_rec passenger1);
void display(struct bryanair_rec passenger1);

//main function
int main()
{
    //initialising passenger1 and passenger2
    struct bryanair_rec passenger1;

    //calling function enter
    enter(passenger1);
    //calling function display
    display(passenger1);

    return 0;
} //end main

//function for entering details
void enter(struct bryanair_rec passenger1)
{
    //entering details for both passengers
    printf("Entering details for 2 passengers... \n");
    printf("Please enter flight number \n");
    gets(passenger1.flight_num);
    printf("Please enter flight date\n");
    gets(passenger1.flight_date);

    //entering details for first passenger
    printf("\nPlease enter surname of first passenger \n");
    gets(passenger1.pass_surname);
    printf("Please enter firstname of first passenger \n");
    gets(passenger1.pass_firstname);
    printf("Please enter seat number of first passenger \n");
    gets(passenger1.seat_num);


} //end int enter

//function for displaying details
void display(struct bryanair_rec passenger1)
{
    //printing details for both passengers
    printf("\nDisplaying flight details for passenger1 and passenger2... \n");
    printf("Flight number:");
    puts(passenger1.flight_num);
    printf("Flight date:");
    puts(passenger1.flight_date);

    //printing details for first passenger
    printf("\nPassenger 1 \n");
    printf("Surname:");

    printf("Firstname:");
    puts(passenger1.pass_firstname);
    printf("Seat number:");
    puts(passenger1.seat_num);

} //end int display

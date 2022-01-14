/************************************************************
*
*  A class written to run Lab 2
*  Date: Feb 2018
*  Author: SMcK
*
**********************************************************//
package com.oo.labs;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Control {

	public static void main(String[] args) 
	{

	    // set up sample Animal objects using both of the constructors
		Animal a1 = new Animal("Spot");
		Animal a2 = new Animal("Sam", "dog", 3, true, "brown" );

		System.out.println(a1);
		System.out.println(a2);
       
	    // method overloading example
		a2.makeNoise();
		a2.makeNoise(true);
		
		// part 5 optional  - code to get a value from the command line
		Scanner input = new Scanner(System.in);
		System.out.print("Enter something > ");
		String inputString = input.nextLine();
		System.out.print("You entered : ");

		// the variable inputString now contains the typed in value - Use it to, e.g., set up a constructor for an object
		System.out.println(inputString);


	}

}

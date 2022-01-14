/**********************************
* A class written to run lab 2
* Date: 07/02/18
* Author: Eoin Lynch
***********************************/

package com.lab2.test;

public class Control {

	public static void main(String[] args) {
		//set up sample animal objects using both constructors
		Animal a1 = new Animal("Spot");
		Animal a2 = new Animal("Sam", "dog", 3, true, "brown");
		
		System.out.println(a1);
		System.out.println(a2);
		
		//method overloading
		a2.makeNoise();
		a2.makeNoise(true);
		

	}

}

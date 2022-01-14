/*************************
* Control class for lab 3
* Author: Eoin Lynch
* Date: 14/02/2019
**************************/

package com.lab3.test;

public class Control {

	public static void main(String[] args) {
		Employee e1 = new Employee("John", "Smith", 452, 70000);
		HourlyEmployee e2 =  new HourlyEmployee("Lisa", "Smith", 453, 0, 90, 20);
		System.out.println(e1);
		System.out.println(e2);
	}

}

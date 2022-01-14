/*********************************************************
*Control: This program prints out hello world
*Author: Eoin Lynch
*Date: 30/01/19
**********************************************************/

package com.lab1.test;

public class Control 
{
	public static void main(String[] args)
	{
		System.out.println("hello world");
		
		Vehicle vehicle1 = new Vehicle("joe", 112231, 65, "red", "automatic");
		Vehicle vehicle2 = new Vehicle("john", 221234, 70, "blue", "manual");
		
		System.out.println(vehicle1);
	}

}
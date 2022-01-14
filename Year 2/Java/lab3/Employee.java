/*
 * 
 *   This class is being used to demonstrate inheritance. It will
 *   be at the top of the class hierarchy
 *   Author: Susan McKeever
 *   Date: 9th Feb
 */


package com.test.oo;

public class Employee
{

	// attributes/ fields
	
	String 	firstName;
	String 	surName;
	int 	staffNumber;
	double 	annualSalary;
	String 	startDate;

	// constructors
	
	public Employee(String firstName, String surName, int staffNumber, double baseAnnualSalary, String startDate )
	{
		this.firstName 			= firstName;
		this.surName 			= surName;
		this.staffNumber 		= staffNumber;
		this.baseAnnualSalary 	= baseAnnualSalary;
		this.startDate 			= startDate;
		
	}
	
	public double  calculatePay ()
	{
	   
		return baseAnnualSalary/12;
		
		
	}	

	public String toStrng ()
	{
	   
		return  "This employee is called " + firstName + " " + surName + "and has staff number " + staffNumber + " and is paid " + annualSalary + " per year" + and started on + "startDate";
		
		
	}	
		
} // end class

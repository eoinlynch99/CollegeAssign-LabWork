/*
 * 
 *   This class is being used to demonstrate inheritance. It will
 *   be at the top of the class hierarchy
 *   Author: Susan McKeever
 *   Date: 9th Feb
 */


package com.test.oo;

public class HourlyEmployee extends Employee
{

	// attributes/ fields
	
	int 	hoursWorked;
	double 	hourlyRate;
	// constructors
	
	public HourlyEmployee(String firstName, String surName, int staffNumber, double baseAnnualSalary, int hoursWorked, double hourlyRate)
	{
		super(firstName, surName, staffNumber, baseAnnualSalary, startDate);
		this.hourlyRate 		= hourlyRate;
		this.hoursWorked 		= hoursWorked;
		
	}
	
	public double  calculatePay ()
	{
	   
		return hourlyRate*hoursWorked;
		
		
	}	
	
	public String toStrng ()
	{
	   
		return  super.toString() + "and hours worked as " + hoursWorked + " and rate is " + hourlyRate;
		
		
	}	
		
		
} // end class

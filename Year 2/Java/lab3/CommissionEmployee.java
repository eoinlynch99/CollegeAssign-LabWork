/*
 * 
 *   This class is being used to demonstrate inheritance. It will
 *   be at the top of the class hierarchy
 *   Author: Susan McKeever
 *   Date: 9th Feb
 */


package com.test.oo;

public class CommissionEmployee extends Employee
{

	// attributes/ fields
	
	double commissionEarned;
	// constructors
	
	public CommissionEmployee(String firstName, String surName, int staffNumber, double baseAnnualSalary, String startDate, double commissionEarned)
	{
		super(firstName, surName, staffNumber, baseAnnualSalary, startDate);
		this.commissionEarned 		= commissionEarned;
		
	}
	
	public double  calculatePay ()
	{
	   
		return baseAnnualSalary*commissionEarned;
		
		
	}	

    	
	public String toStrng ()
	{
	   
		return  super.toString() + "and commission earned is " + commissionEarned);
		
		
	}		
	
} // end class

/***************************************************************************
 * 
 * 
 *  This class describes a generic Data: day  month year
 *  Author: Susan McKeever
 *  2016
 *  
 *  
 ************************************************************************************/
package com.test.lab5;

public class Date 
{

	private int month; //1 - 12
	private int day; // 1-31
	private int year; // any year
	
	private int maxDays = 31; // any year
	private int maxMonth = 12; // any year

	// Constructor
	public Date (int day, int month, int year)
	{
		// validate month
		if (month <= 0 || month > maxMonth)
		  throw new IllegalArgumentException ("Month must be in range 1- 12"); 
		  
		
		// validate day
		  if (day <=0 || day > maxDays)
			  throw new IllegalArgumentException ("days must be in 1- 31"); 
			  
		  this.month 	= month;
		  this.day 		= day;
		  this.year 	= year;
		  System.out.println("the date is " + day + "/" + month + "/" + year);
	}

	public String toString()
     {  
		 return "the date is " + day + "/" + month + "/" + year;  
		  
				
	}
}

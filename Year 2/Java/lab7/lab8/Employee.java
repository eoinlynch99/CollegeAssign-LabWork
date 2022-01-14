/**************************************************************
 * 
 *   This class is being used to demonstrate composition. 
 *   It includes an attribute of type Date and of type Job.
 *   Author: Susan McKeever
 *   Date: 2016
 *   
 *****************************************************************************/


package com.test.lab5;

public class Employee extends Person
{

	// attributes/ fields
	
	Job job;
	Date startDate;

	// constructors
	
	public Employee(String firstName, String surName, String gender, Date dateOfBirth, Job job, Date startDate)
	{
	    super(firstName, surName, gender, dateOfBirth);
	    this.job 		= job;
		this.startDate 	= startDate;
		
	}

	public String toString()
	{
    	FileManager fm = new FileManager("names.txt");
    	fm.connectToFile();
    	fm.getFileWriter();
    	String value = "Name is " + super.getFirstName() + " " + super.getSurName();
    	fm.writeLineToFile(value);
    	fm.closeWriteFile();
    	return value;
	}
	
		
} // end class

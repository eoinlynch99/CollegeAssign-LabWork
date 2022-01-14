/*************************
* Employee class for lab 3
* Author: Eoin Lynch
* Date: 14/02/2019
**************************/

package com.lab3.test;

public class Employee {
	private String firstName;
	private String surName;
	private int staffNumber;
	private double annualSalary;
	
	//Constructor that sets up all attribute variables
	public Employee(String firstName, String surName, int staffNumber, double annualSalary)
	{
		this.setFirstName(firstName);
		this.setSurName(surName);
		this.setStaffNumber(staffNumber);
		this.setAnnualSalary(annualSalary);
	}
	
	//Method to calculate the monthly salary
	public String calculatePay()
	{
		double monthlyPay = annualSalary / 12;
		
		return "The employee called " + getFirstName() + " and his monthly pay is " + monthlyPay;
	}
	
	//Method that allows the objects to display it's attribute values in a tidy manor
	public String toString()
	{	
		return "The employee called " + getFirstName() + " " + getSurName() + " has a staff number of " + getStaffNumber() +
				" and has a salary of " + getAnnualSalary();
	}
	
	public String getFirstName() {
		return firstName;
	}

	public void setFirstName(String firstName) {
		this.firstName = firstName;
	}

	public String getSurName() {
		return surName;
	}

	public void setSurName(String surName) {
		this.surName = surName;
	}

	public int getStaffNumber() {
		return staffNumber;
	}

	public void setStaffNumber(int staffNumber) {
		this.staffNumber = staffNumber;
	}

	public double getAnnualSalary() {
		return annualSalary;
	}

	public void setAnnualSalary(double annualSalary) {
		this.annualSalary = annualSalary;
	}

}

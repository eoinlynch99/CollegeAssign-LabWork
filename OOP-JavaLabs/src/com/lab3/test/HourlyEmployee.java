/*********************************
* Hourly employee class for lab 3
* Author: Eoin Lynch
* Date: 14/02/2019
**********************************/

package com.lab3.test;

public class HourlyEmployee extends Employee{

	private double hoursWorked;
	private double hourlyRate;
	private double monthlySalary;
	private double total;
	private String result;
	
	//Constructor that sets up all the attributes
	public HourlyEmployee(String firstName, String surName, int staffNumber, double annualSalary, int i, int j)
	{
		super(firstName, surName, staffNumber, annualSalary);
		this.setHoursWorked(hoursWorked);
		this.setHourlyRate(hourlyRate);
	}
	
	//Method to calculate the employees pay
	public String calculatePay()
	{
		return hourlyRate * hoursWorked;
	}
	
	//Method that allows the objects to display it's attribute values in a tidy manor
	public String toStrng()
	{
		return super.toString() + "and hours worked as " + hoursWorked + "and rate is " + hourlyRate;
	}
	
	
	public double getTotal() {
		return total;
	}

	public void setTotal(double total) {
		this.total = total;
	}

	public String getResult() {
		return result;
	}

	public void setResult(String result) {
		this.result = result;
	}

	public double getHoursWorked() {
		return hoursWorked;
	}

	public void setHoursWorked(double hoursWorked) {
		this.hoursWorked = hoursWorked;
	}

	public double getMonthlySalary() {
		return monthlySalary;
	}

	public void setMonthlySalary(double monthlySalary) {
		this.monthlySalary = monthlySalary;
	}

	public double getHourlyRate() {
		return hourlyRate;
	}

	public void setHourlyRate(double hourlyRate) {
		this.hourlyRate = hourlyRate;
	}
}

package com.week1.oo;

public class Person 
{

	String firstName ;
	String surName;
	String city;
	
	public Person (String firstName, String surName, String city)
	{
		this.firstName = firstName;
		this.surName = surName;
		this.city = city;
		
	}
	
	public String toString()
	{
		return "This person is called " + firstName + " " + surName + " and is from " + city;
	}
	
}

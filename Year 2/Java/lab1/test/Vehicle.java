/*************************************************************************
*Control: This program manipulates data in variables using constructors
**Author: Eoin Lynch
*Date: 31/01/19
**************************************************************************/

package com.lab1.test;

public class Vehicle 
{
	
	private String ownerName;
	private int regNum;
	private int maxSpeed;
	private String colour;
	private String transmissionType;
		
	public Vehicle(String ownerName, int regNum, int maxSpeed, String colour, String transmissionType)
	{
		this.ownerName = ownerName;
		this.regNum = regNum;
		this.maxSpeed = maxSpeed;
		this.colour = colour;
		this.transmissionType = transmissionType;
	}
		
	public String toString()
	{
		String content = "The owners name is " + this.ownerName + " and his car registration is " + this.regNum;
		
		return content;
	}
}

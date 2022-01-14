/**************************************************************************
*
*   Class: control.java
*   Author: Susan McKeever
*   Date 6 Feb 2017
*   Description: This uses the classes we have created .. and demos polymorphism
*
*****************************************************************************/
package com.test.oo;

public class Control 
{

	public static void main (String args[])
	{
	

		Employee[] employees = new Employee[4];
		employees[0] = new Employee("susan", "murphy", 88372, 343.00, "01/01/2016");
		employees[1] = new HourlyEmployee("Joe", "murphy", 823472, 0.00, "01/01/2016", 25, 4.50);
		employees[2] = new CommissionEmployee("Danny", "Brown", 822312, 887.00, "01/01/2016", 888347.09);
		employees[3] = new Employee("Helen", "OBrien", 88372, 343.00, "01/02/2014");

		// polymorphism - the "right" calculatePay will be called, based on know the type of the object it is being
		// called on.
		
		for (int i= 0; i<employees.length; i++)
		{
			System.out.println("i = " +i);
			System.out.println(employees[i].calculatePay());
		}
		

	}
	
}

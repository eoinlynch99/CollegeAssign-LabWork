package com.test.lab5;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class ControLab5 
{
	  public static void main(String[] args)  //throws FileNotFoundException
	  {

		  Job job1 = new Job ("Engineer", 98897.87, 67);
		  Job job2 = new Job ("daddy", 98897.87, 67);
		  Date d1 = new Date(2,12, 1912);
		  Date d2 = new Date(12,04, 1996);
		  Date d3 = new Date(12,10, 2015);
		  Person p1 = new Person ("susan", "murphy", "female", d1);
		  Employee e1 = new Employee ("susan", "murphy", "female", d2, job1, d1);
		  System.out.println(e1);
		  
	  }
	  
}	  


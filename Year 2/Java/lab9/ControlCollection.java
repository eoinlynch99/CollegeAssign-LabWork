package com.week1.oo;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

public class ControlCollection {

	public static void main(String[] args) 
	{
	

		ArrayList<String> myText = new ArrayList();
		myText.add("Sarah");
		myText.add("John");
		myText.add("Henry");
//		Collections.sort(myText);
		Iterator<String> i = myText.iterator();
		
		for (String element:  myText)
		 System.out.println("element is " + element);

		
		ArrayList<Employee> myEmployees = new ArrayList();
		
		StringScreen3  screen  = new StringScreen3("lab 10");
		
		
	}

}

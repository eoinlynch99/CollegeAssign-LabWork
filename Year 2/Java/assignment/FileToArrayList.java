package com.assignment.OO;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.*;

public class FileToArrayList
{
	public ArrayList<String> list = new ArrayList<String>();
	
	public FileToArrayList()
	{
		try
		{
			Scanner scanner1 = new Scanner(new File("C:\\Users\\sterl\\Documents\\Eclipse Workspace\\OO_Assignment\\src\\TextValues.txt"));
			while(scanner1.hasNext()) 
			{
				list.add(scanner1.next());
			}
			
		scanner1.close();
		}
		catch(FileNotFoundException e)
		{
			System.out.println(e.getMessage());
		} 
	
	}
}

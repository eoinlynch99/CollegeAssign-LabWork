/**************************************************
 * 
 * 
 *  This class describes a Job
 *  Author: Susan McKeever
 *  2016
 *  
 *  
 ************************************************************************************/
package com.test.lab5;

public class Job 
{

    private String role;
    private double salary;
    private int id;
         
    
    // the constructor checks that the role passed in exists in a particular file, "roles.txt"
	public Job(String role, double salary, int id) {
	   	this.salary  	= salary;
    	this.id 		= id;
    	this.role 		= role;
    	
    	// read in the roles
    	FileManager fm 	= new FileManager("roles.txt");
    	fm.connectToFile();
    	String[] validRoles = fm.readFile();
    	fm.closeReadFile();
    	boolean validRole = false;
    	
    	// check if the role exists in the file values in the file
    	for (int i = 0; i< validRoles.length; i++)
    	{
	    	 System.out.println("role is " + role);
	    	 System.out.println("array contains " + validRoles[i]);
    		
	    	 if (role.equals(validRoles[i]))
    	     {
    	    	 System.out.println("I got this part");
    	    	 validRole = true;
    	     }
    	}
    	if (validRole == false)
    	{
    		System.out.println("this is not a valid role!");
    	}
   	}
    	
    // getter setters
    public String getRole() {
        return role;
    }
    public void setRole(String role) {
        this.role = role;
    }
    public double getSalary() {
        return salary;
    }
    public void setSalary(double salary) {
        this.salary = salary;
    }
    public int getId() {
        return id;
    }
    public void setId(int id) {
        this.id = id;
    }
     
    

}

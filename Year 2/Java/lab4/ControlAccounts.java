package com.test.lab4;

public class ControlAccounts {

	public static void main(String[] args) 
	
	{
	
	      // sample tests.  Just add in your own to test your code.
		  
		  Account account1 = new Account("Susan", 8887334.22,  "98-04", "dublin", true);
		  System.out.println("Account number is " + account1.getAccountNumber());
		
		  Account account2 = new Account("Susan", 8887334.22,  "98-04", "dublin", true);
		  System.out.println("Account number is " + account2.getAccountNumber());

		  CurrentAccount account3 = new CurrentAccount("Susan", 8887334.22,  "98-04", "dublin", true, 8873);
		  account3.withdraw(100);
		  account3.deposit(200);
		  System.out.println("Account number is " + account3.getAccountNumber());

		  
	}

}

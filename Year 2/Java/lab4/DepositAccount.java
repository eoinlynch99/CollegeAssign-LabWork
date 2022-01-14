/**********************************************************
 * 
 *  An example of a class - Account
 *
************************************************************* */

package com.test.lab4;

public class DepositAccount extends Account implements ValidatedAccount
{
	

	private double interestRate;

	
    // a constructor for DepositAccount objects. Note that the Account superclass constructor is called 
	DepositAccount (String accountName, double acctBalance,  
						String sortCode, String branch, boolean inCredit, double interestRate)
	{
		super(accountName, acctBalance,  sortCode, branch, inCredit);
		this.interestRate = interestRate;
	
	}		
	
	// NOTE: getter and setter methods should be inserted for all attributes
	
	public void deposit (double amount)
	{
		acctBalance = acctBalance + amount;
	
	}

	public void withdraw (double amount)
	{
		System.out.println("you are not allowed to withraw money from a deposit account");
	}
	

	public void getDetails() 
	{
		System.out.println ("account type is deposit");
		
	}

	@Override
	public void valuableAccount() 
	{
		System.out.println ("account type is deposit and balance is "+acctBalance);
		
	}

}
	
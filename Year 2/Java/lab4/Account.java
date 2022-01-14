/**********************************************************
 * 
 *  An example of a class - Account
 *  Note: Getters and setters for each attribute are not included - just 
 *  generate them using the "refactor" function in Eclipse/ 
 *  For now, the attributes are listed as "protected", which means subclasses can access them
 *
************************************************************* */

package com.test.lab4;

public class Account implements ValidatedAccount
{

	// attributes
	protected String 	accountName; // instance variable 		
	protected double 	acctBalance;  // instance variable
	private int			accountNumber;
	protected String 	sortCode;
	protected String 	branch;
	protected boolean 	inCredit;
	
	// this last attribute is static - so there is only one copy of it. 
	// It will be a central record of the next available account number to be used, across all objects 
	protected static int  currentNumber = 100;
	

	
	// A constructor
	Account (String accountName, double acctBalance,  
						String sortCode, String branch, boolean inCredit)
	{
		this.accountName 	= accountName; // instance variable 		
		this.acctBalance 	= acctBalance;  // instance variable
		this.sortCode 		= sortCode;
		this.branch 		= sortCode;
		this.inCredit 		= inCredit;
		
		// Set the account number to next available account number
		this.accountNumber = currentNumber;
		
		// And update/increment the next available account number
		currentNumber++;
		
	}		
	
	// NOTE: getter and setter methods should be inserted for all attributes
	
	public void deposit (double amount)
	{
		acctBalance = acctBalance + amount;
	
	}

	public void withdraw (double amount)
	{
		acctBalance = acctBalance - amount;
		if (acctBalance < 0)
		{
			inCredit = false;
		}
	
	}

	// This is one of the ValidatedAccount interface methods so this has to be implemented 
	@Override
	public void getDetails() 
	{
		System.out.println("Account type is account");
		
	}

	// This is one of the ValidatedAccount interface methods so this has to be implemented 
	@Override
	public void valuableAccount() 
	{
		System.out.println("Account type is account and balance is " +acctBalance);
		
	}

	protected int getAccountNumber() {
		return accountNumber;
	}


	
}
	
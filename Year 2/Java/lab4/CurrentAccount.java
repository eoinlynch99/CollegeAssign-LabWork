/**********************************************************
 * 
 *  Current Account. Subclass of Account
 *  Note: Getter and setter for attribute to be added
 *
************************************************************* */

package com.test.lab4;

public class CurrentAccount extends Account implements ValidatedAccount 
{

	private double penaltyAmount;
	

	// Constructor for CurrentAccount objects- note that it calls the super class Account's constructor. 
	CurrentAccount (String accountName, double acctBalance,  
						String sortCode, String branch, boolean inCredit, double penaltyAmount)
	{
		super(accountName, acctBalance,  sortCode, branch, inCredit);
		this.penaltyAmount		= penaltyAmount;
	
	}		
	
	// Checkcredit method is overloaded.. i.e. 2 "versions" of it in the same class
	public String checkCredit()
	{
		String msg = "you are not in credit";
		if (inCredit)
		{
			msg = " you are in credit";
		}
	    return msg;
	}

	public void checkCredit(String message)
	{
		if (acctBalance < 100)
		{
			System.out.println("Your account is in credit");
		}
	 }

	
	public void withdraw (double amount)
	{
		super.acctBalance = acctBalance - amount;
		if (acctBalance < 0)
		{
			System.out.println ("Insufficient Funds");
		}
	
	}

	@Override
	public void getDetails() 
	{
		System.out.println ("account type is current");
		
	}

	@Override
	public void valuableAccount() 
	{
		System.out.println ("account type is current and balance is "+acctBalance);
		
	}
}
	
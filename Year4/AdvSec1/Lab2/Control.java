package lab2;

import java.util.*;
import java.net.URL;

public class Control {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//creating objects for classes
		CaeCipher CaeCiph = new CaeCipher();
		VigCipher VigCiph = new VigCipher();
		
		//setting variables for cipher program
		String selectCipher = " ";
		String encryptedMessage = " ";
		String decryptedMessage = " ";
		String placeholderMSG;
		char ch1;
		int ciphKey = 0;
		String vigKey;
		String temp;
		
		//prompting and getting input
		Scanner sc1 = new Scanner(System.in);
		System.out.println("Please select your cipher. Enter c for Caesar cipher, v for Vigenere, s for Base64 and t for Base16: \n");
		
		//this assigns the variable the user types in to selectCipher variable and setting to lowercase
		selectCipher = sc1.nextLine();
		selectCipher.toLowerCase();
		ch1 = selectCipher.charAt(0);
		
		//if statement to do error catching
		if((selectCipher.length() == 1 ) && (ch1 == 'c' || ch1 == 'v' || ch1 == 's' || ch1 == 't'))
		{
			switch(ch1)
			{
			case 'c':
				//get user to enter encrypted message and saves messsage to variable
				System.out.println("Enter encrypted message:\n");
				encryptedMessage = encryptedMessage + sc1.nextLine();
				
				//brute force message to display the result from each letter in alphabet
				for(int i = 0; i<26; i++)
				{
					placeholderMSG = CaeCiph.Decrypt(encryptedMessage, i);
					System.out.println( "(" + i + ") " + placeholderMSG);
					placeholderMSG = "";
				}
				
				sc1.nextLine();
				
				//user selects correct key after seeing results
				System.out.println("\nSelect the correct key: ");
				temp= sc1.nextLine();
				ciphKey = Integer.parseInt(temp);
				sc1.close();
				
				decryptedMessage = CaeCiph.Decrypt(encryptedMessage, ciphKey);
				
				break;
				
			case 'v':				
				//get user to input encrypted message and saves message to variable
				System.out.println("Enter encrypted message: " );
				encryptedMessage = encryptedMessage + sc1.nextLine();
				
				//ask for the key and save it to variable, passes to class to be decrypted
				System.out.println("Enter the key: ");
				vigKey = sc1.nextLine();
				decryptedMessage = VigCiph.Decrypt(encryptedMessage, vigKey);
				
				break;
			default:
				break;
			
			}//end switch
			
			if(ch1 != 'b')
				System.out.println("\nDecrypted Message:\n" + decryptedMessage);
			
		}//end if
		else
		{
			System.out.println("Please enter a valid input");
		}//end else
	}//end main
}//end control
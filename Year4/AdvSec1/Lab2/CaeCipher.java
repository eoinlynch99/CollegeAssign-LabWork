package lab2;

public class CaeCipher {

	public String Decrypt(String encryptedMessage, int ciphKey)
	{
		//initalise variables
		char ch1;
		String decryptedMessage = " ";
		
		//makes message lowercase
		encryptedMessage = encryptedMessage.toLowerCase();
		
		for(int i = 0; i<encryptedMessage.length(); ++i)
		{
			ch1 = encryptedMessage.charAt(i);
			
			//checks if the character is a letter
			if(ch1>= 'a' && ch1<= 'z')
			{
				//takes away the key value from the cahracter
				ch1 = (char)(ch1-ciphKey);
				
				//if value is less than a, loop around and continue from z
				if(ch1 < 'a')
				{
					ch1 = (char)(ch1 + 'z' - 'a' + 1);
				}//end if
				
				//adds the character to the decryptes message
				decryptedMessage += ch1;
			}//end if
			else
			{
				//if the character is not a letter nothing is changed
				decryptedMessage +=ch1;
			}//end else
		}//end for
		
		//return the decrypted message
		return decryptedMessage;
	}//end decrypt
}//end main

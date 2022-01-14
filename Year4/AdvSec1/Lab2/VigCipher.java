package lab2;

public class VigCipher {
	
	public String Decrypt(String encryptedMessage, final String vigKey)
	{
		//initialize variables
		String decryptedMessage = "";
		encryptedMessage = encryptedMessage.toUpperCase();
		char ch1;
		
		//for loop to decrypt
		for (int i = 0, j = 0; i < encryptedMessage.length(); i++)
		{
			ch1 = encryptedMessage.charAt(i);
			
			if (ch1 < 'A' || ch1 > 'Z') continue;
			
			decryptedMessage += (char) ((ch1 - vigKey.charAt(j) + 26) % 26 + 'A');
			
			j = ++j % vigKey.length();
		}//end for
		
		return decryptedMessage;
	}//end decrypt
}//end main

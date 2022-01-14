package com.week1.oo;
	/**************************************************************
	 * 
	 *  Lab week 6/7: GUI more programming,  using string and file processing
	 *  Author: Susan McKeever
	 &  Date: 2018
	 * 
	 ****************************************************************/
	
	import java.awt.BorderLayout;
	import java.awt.FlowLayout;
	import java.awt.event.ActionEvent;
	import java.awt.event.ActionListener;
	import java.awt.event.MouseEvent;
	import java.awt.event.MouseListener;

	import javax.swing.JButton;
	import javax.swing.JFrame;
	import javax.swing.JLabel;
	import javax.swing.JOptionPane;
	import javax.swing.JPanel;
	import javax.swing.JTextField;

	public class StringScreen  extends JFrame implements ActionListener
	{

		  // Declare GUI components as attributes of the screen
		  private JButton button1, button2, button3;
		  private JTextField textString; 	  
		  private JTextField textChar; 	  
		  private JTextField textWord; 	  
		  private JLabel fileLine;
	 
		  // Constructor
	  
		  public StringScreen (String title)
		  {
			   super(title);
			   setLayout(new FlowLayout());
			   textString 	= new JTextField("enter your text here   ");
			   textChar 	= new JTextField("enter the character to check for here   ");
			   textWord 	= new JTextField("enter a word to check for here    ");
			   
			   
			   button1 		= new JButton("First letter?");
			   button2 		= new JButton("Word contained?");
			   button3 		= new JButton("Read File");
			   
			   // Part 1 of the lab - two textfields and a button
			   add(textString);
			   add(textChar);
			   add(button1);

			   // Part 2 of the lab - a textfield to get a word, and a second button
			   add(textWord);
			   add(button2);

			   // Part 3 of the lab - add a button to read the file 
			   add(button3);
			   fileLine = new JLabel("The file line will go here when read");

			   button1.addActionListener(this);
			   button2.addActionListener(this);
			   button3.addActionListener(this);
			   
			   setLocation(300,300);
			   setSize(500,500);
			   setVisible(true);
			   		   
		  }


		@Override
		public void actionPerformed(ActionEvent arg0) {
		    
			// variables used in the method
			String test = textString.getText();
			String result = "no result";
			
		    // if it's the first button, do the character check
		
			if (arg0.getSource() == button1)
		    {		
				char testChar = textChar.getText().charAt(0);
				
				
				if (test.indexOf(testChar) == 0)
				  result = "yes, " + testChar + " is the first letter";
				
				
				else
					
				  result = "nope, not the first letter";
							
				JOptionPane.showMessageDialog(this, result);
				
			}
			else
			
			if (arg0.getSource() == button2)
		    // second button clicked 
		    	    	
		    {
		    	// Check if there is a sentence/ word entered in.. 
				// check if there is a sentence in textfield1 by looking for blanks. No blanks means less than two words
				if (test.indexOf(" ") == 0)
				  result = "You must have at least two words in the sentence";

				else // check if there is a sentence in textfield1
					if (textWord.getText().indexOf(" ") > 0)
						  result = "Only one word allowed in the your test";
						
					else // check if the text word field is blank
						if (textWord.getText().isEmpty())
							  result = "Please enter a test word";
									
						else
							if (test.contains(textWord.getText()))
									result = "Yes, the word " + textWord.getText() +  "is in the sentence";
							else
								    result = "Nope, this word " + textWord.getText() + " is NOT in the sentence";
					
		    }
			else
			    // must be the third button
			{
				   // Use the FileReader class created, to read in the text file textvalues.txt as specified in the lab
				   // To use the class, we have to create an object of it.  The constructor takes the file name. 
				
				FileReader fileReader = new FileReader("textvalues.txt");
				
				// then, use your filereader object to execute the methods you need.
				fileReader.openFile();
				String line = fileReader.readLine();
						
			}
				
			JOptionPane.showMessageDialog(this, result);
		 
		}  // end ActionPerformed
		
		  
} // end class




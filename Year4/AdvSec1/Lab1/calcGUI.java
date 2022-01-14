/*
 * Eoin Lynch - c16310846
 * Lab1 part c
 * TITLE: Calculator
 */

package lab1;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JTextField;
import java.awt.BorderLayout;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.Font;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class calcGUI {

	//Variables for gui
	private JFrame frame;
	private JTextField number1;
	private JTextField number2;
	private JTextField answer;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					calcGUI window = new calcGUI();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}
	
	int num1, num2, ans;
	
	/**
	 * Create the application.
	 */
	public calcGUI() {
		initialize();
	}

	/**
	 * Initializing the contents of the frame.
	 */
	private void initialize() {
		//initializing the various text fields
		frame = new JFrame();
		frame.getContentPane().setEnabled(false);
		frame.getContentPane().setLayout(null);
		
		number1 = new JTextField();
		number1.setBounds(25, 36, 185, 70);
		frame.getContentPane().add(number1);
		number1.setColumns(10);
		
		number2 = new JTextField();
		number2.setBounds(223, 36, 185, 70);
		frame.getContentPane().add(number2);
		number2.setColumns(10);
		
		answer = new JTextField();
		answer.setBounds(157, 198, 124, 58);
		frame.getContentPane().add(answer);
		answer.setColumns(10);
		
		//setting the values for the labels
		JLabel lblNewLabel = new JLabel("Answer");
		lblNewLabel.setFont(new Font("Tahoma", Font.PLAIN, 17));
		lblNewLabel.setBounds(187, 173, 67, 29);
		frame.getContentPane().add(lblNewLabel);
		
		JLabel lblNumber = new JLabel("Number1");
		lblNumber.setFont(new Font("Tahoma", Font.PLAIN, 17));
		lblNumber.setBounds(85, 11, 67, 14);
		frame.getContentPane().add(lblNumber);
		
		JLabel lblNumber_1 = new JLabel("Number2");
		lblNumber_1.setFont(new Font("Tahoma", Font.PLAIN, 17));
		lblNumber_1.setBounds(295, 11, 67, 14);
		frame.getContentPane().add(lblNumber_1);
		
		//adding functionality to the plus button
		JButton addButton = new JButton("+");
		addButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				try {
					num1=Integer.parseInt(number1.getText());
					num2=Integer.parseInt(number2.getText());
				
					ans = num1+num2;
					answer.setText(Integer.toString(ans));
				}
				//error catching
				catch(Exception e1) {
					JOptionPane.showMessageDialog(null, "Please input a valid number");
				}
				}
		});
		addButton.setFont(new Font("Tahoma", Font.PLAIN, 17));
		addButton.setBounds(25, 123, 89, 52);
		frame.getContentPane().add(addButton);
		
		//adding functionality to the minus button
		JButton subButton = new JButton("-");
		subButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				try {
					num1=Integer.parseInt(number1.getText());
					num2=Integer.parseInt(number2.getText());
				
					ans = num1-num2;
					answer.setText(Integer.toString(ans));
				}
				//error catching
				catch(Exception e1) {
					JOptionPane.showMessageDialog(null, "Please input a valid number");
				}
			}
		});
		subButton.setFont(new Font("Tahoma", Font.PLAIN, 17));
		subButton.setBounds(124, 123, 89, 52);
		frame.getContentPane().add(subButton);
		
		//adding functionality to the multiplication button
		JButton multButton = new JButton("x");
		multButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				try {
					num1=Integer.parseInt(number1.getText());
					num2=Integer.parseInt(number2.getText());
				
					ans = num1*num2;
					answer.setText(Integer.toString(ans));
				}
				//error catching
				catch(Exception e1) {
					JOptionPane.showMessageDialog(null, "Please input a valid number");
				}
			}
		});
		multButton.setFont(new Font("Tahoma", Font.PLAIN, 17));
		multButton.setBounds(220, 123, 89, 52);
		frame.getContentPane().add(multButton);
		
		//adding functionality to the division button
		JButton divButton = new JButton("/");
		divButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				try {
					num1=Integer.parseInt(number1.getText());
					num2=Integer.parseInt(number2.getText());
				
					ans = num1/num2;
					answer.setText(Integer.toString(ans));
				}
				//error catching
				catch(Exception e1) {
					JOptionPane.showMessageDialog(null, "Please input a valid number");
				}
				}
		});
		divButton.setFont(new Font("Tahoma", Font.PLAIN, 17));
		divButton.setBounds(319, 123, 89, 52);
		frame.getContentPane().add(divButton);
		frame.setBounds(100, 100, 450, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}

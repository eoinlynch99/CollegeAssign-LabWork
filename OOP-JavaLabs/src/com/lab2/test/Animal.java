/**************************
 * Animal class for lab 2
 * Date: 07/02/2019
 * Author: Eoin Lynch
 **************************/

package com.lab2.test;

public class Animal {
	//Encapsulated attributes
	private String name;
	private String breed;
    private int numberOfLegs;
	private boolean domesticAnimal;
	private String colour;
	
	//Constructor that sets up animal name
	public Animal(String name)
	{
		this.setName(name);
	}
	
	//Constructor that sets up all the parameters
	public Animal(String name, String breed, int numberOfLegs, boolean domesticAnimal, String colour )
	{
		this.setName(name);
		this.setBreed(breed);
		this.setNumberOfLegs(numberOfLegs);
		this.setDomesticAnimal(domesticAnimal);
		this.setColour(colour);
	}
	
	//Method that allows the objects to display it's attribute values in a tidy manor
	public String toString()
	{
		String suitableAsPet = "";
		if (!isDomesticAnimal())
		{
			suitableAsPet = " not";
		}
		
		return "This animal is called " + getName() + " and is" + suitableAsPet + " suitable as a pet";
	}
	
	//method that makes a noise
	public void makeNoise()
	{
		if(breed.equals("dog"))
		{
			System.out.println("Bark bark!!");
		}
		else
		if(breed.equalsIgnoreCase("cat"))
		{
			System.out.println("Meow!");
		}
		else
		{
			System.out.println("roar!");
		}
	}
	
	//method overloading
	public void makeNoise(boolean old)
	{
		if (old)
		{
			System.out.println("Quite animal");
		}
		else 
			makeNoise();
	}
	
	//Getter and setter methods used to set or retrieve attribute values
	private String getName() {
		return name;
	}
	
	private void setName(String name) {
		this.name = name;
	}
	
	private String getBreed() {
		return breed = breed;
	}
	
	private void setBreed(String breed) {
		this.breed = breed;
	}
	
	private int getNumberOfLegs() {
		return numberOfLegs;
	}
	
	private void setNumberOfLegs(int numberOfLegs) {
		this.numberOfLegs = numberOfLegs;
	}
	
	private boolean isDomesticAnimal() {
		return domesticAnimal;
	}
	
	private void setDomesticAnimal(boolean domesticAnimal) {
		this.domesticAnimal = domesticAnimal;
	}
	
	private String getColour() {
		return colour;
	}
	
	private void setColour(String colour) {
		this.colour = colour;
	}
	
	
	
}

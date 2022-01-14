
/************************************************************
*
*  Animal class for Lab 2
*  Date: Feb 2018
*  Author: SMcK
*
**********************************************************//
package com.oo.labs;

public class Animal
{
    
    // encapsulated attributes
    private String name;
    private String breed; 
    private int numberOfLegs;
    private boolean domesticAnimal;
    private String colour;
   
    // Constructor that set ups up 1 parameter
    public Animal (String name)
    {
        this.setName(name);

    }
	// Constructor that set ups up all the parameters
    public Animal (String name, String breed, int numberOfLegs, boolean
domesticAnimal, String colour)
    {
        this.setName(name);
        this.setBreed(breed);
        this.setNumberOfLegs(numberOfLegs);
        this.setDomesticAnimal(domesticAnimal);
        this.setColour(colour);
    }

	// method that allows the object to display its attributes values in a clear tidy way.  
    public String toString()
    {
        String suitableAsPet = "";
        if (!isDomesticAnimal())
        {
          suitableAsPet = "not";
        }
         
        return "This animal is called " + getName() + " and is " +
		getColour() + " in colour and has " +getNumberOfLegs() + " legs and is "
                + suitableAsPet + " suitable as a pet";
       
    }

	// method that makes a noise
    public void makeNoise()
    {
       
        if (breed.equals("dog"))
        {
            System.out.println("Bark bark!!");
        }
        else
        if (breed.equalsIgnoreCase("cat"))
         {
                    System.out.println("miaow miaow!!");
         } 
        else
        {
        	System.out.println("roar!!");
    	} 
        
    }

    // Method overloading - also makes a noise, but different behaviour
    public void makeNoise(boolean old)
    {
       
    	if (old)
    	{
    		System.out.println("Quiet animal");
    	}	
    	else
    	makeNoise();		
        
    }

	// getter and setter methods - these just set or retrieve attribute values. They are needed because the attributes are private so these
	// methods are the only way for external code to see or change the attribute values of an object (e.g. a1.setName("Fido") etc)
	
	private String getName() {
		return name;
	}

	private void setName(String name) {
		this.name = name;
	}

	private String getBreed() {
		return breed;
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
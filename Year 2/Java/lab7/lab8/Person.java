package com.test.lab5;

public class Person 
{
	 
	    //composition has-a relationship
	    private String firstName;
	    private String surName;
	    private String gender;
	    private Date dateOfBirth;
	    
	    public Person(String firstName, String surName, String gender, Date dateOfBirth)
	    {
	       this.setFirstName(firstName);
	       this.setSurName(surName);
	       this.setDateOfBirth(dateOfBirth);
	       
	    }

		public String getFirstName() {
			return firstName;
		}

		private void setFirstName(String firstName) {
			this.firstName = firstName;
		}

		public String getSurName() {
			return surName;
		}

		private void setSurName(String surName) {
			this.surName = surName;
		}

		private Date getDateOfBirth() {
			return dateOfBirth;
		}

		private void setDateOfBirth(Date dateOfBirth) {
			this.dateOfBirth = dateOfBirth;
		}
	 


}

package com;

import Java.util.Scanner;

public class Profile
{
	public String[] strName = {null, null};
	public double dGPA = 0;
	public String strMajor = null;
	public int iGradYear = 0;

	Scanner in = new Scanner(System.in);

	Profile(String[] name, String major, double GPA, int gradyear)
	{
		this.strName = name;
		this.strMajor = major;
		this.dGPA = GPA;
		this.iGradYear = gradyear;
	}

	public void strInputName()
	{
		String[] strTemp = {null, null};

		System.out.println("\nEnter your first name. \n\n");

		strTemp[0] = this.in.next();
		System.out.println("\nEnter your last name. \n\n");

		strTemp[1] = this.in.next();
		this.strName = strTemp;
	}

	public void strInputMajor()
	{
		String strTemp = null;

		System.out.println("\nEnter your Declared Major.\n\n");

		strTemp = this.in.next();

		this.strMajor = strTemp;
	}

	public void iInputGrad()
	{
		int iTemp = 0;

		System.out.println("\nEnter your Expected Graduation Year.\n\n");

		iTemp = this.in.nextInt();

		this.iGradYear = iTemp;
	}

	public void dInputGPA()
	{
		double dTemp = 0.0;

		System.out.println("\nEnter your GPA.\n\n");

		dTemp = this.in.nextDouble();

		this.dGPA = dtemp;
	}

	public void vCloseScanner()
	{
		this.in.close();
	}

	pblic void vPrintProf()
	{
		system.out.print("\nName: " + this.strName[0] + " " + strName[1] + "\n\n"
			+ "Initials: " + this.strName[0].charAt(0) + ". " + strName[1].charAt(0) + ".\n\n"
			+ "Declared Major: " + this.strMajor + "\n\n"
			+ "GPA: " + this.dGPA + "\n\n"
			+ "Expected Graduation Year: " + this.iGradYear + "\n\n");
	}
}
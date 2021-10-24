package com;

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) 
	{
		class MultChoice
		{
			static String[] str = {"Audible", "Tonor", "Klänglig"};
		}	
		boolean bCorrectChoice = false;
		char cChoice;
		String strInput;
		Scanner in = new Scanner(System.in);

		System.out.print("Here's a question for you." + "\n" +
			"What is the brand of my microphone?" + "\n" +
			"A) " + MultChoice.str[0] + "\n" +
			"B) " + MultChoice.str[1] + "\n" +
			"C) " + MultChoice.str[2] + "\n\n");

		while(!bCorrectChoice)
		{
			strInput = in.next();
			cChoice = strInput.charAt(0);
			
			if(cChoice == 'b' || cChoice == 'B')
			{
				System.out.print("Congratulations, you are correct.\n\n");
				bCorrectChoice = true;
			}
			else if(cChoice == 'a' || cChoice == 'A' || cChoice == 'c' || cChoice == 'C')
			{
				System.out.println("Nope, not it. Try again.\n\n");
			}
			else
			{
				System.out.println("Thtat's not even one of the choices.");
			}
		}
		in.close();
	}
}
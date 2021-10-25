/// Function Tutorial in Java -- Salary Calculator Project ///

package com;

import java.util.Scanner;

class Math                                           // Got a bit overzealous with the mathematical operators.  all i really needed was Multiplication as a Double
{													 // And the function for the Salary...but hey, i was having fun.
	public static int Add(int x, int y)
		{
			return x + y;
		}

		public static int Sub(int x, int y)
		{
			return x - y;
		}

		public static int Mul(int x, int y)
		{
			int a = 0;
			for(int i = 0; i < y; i++)
			{
				a = a+x;
			}
			return a;
		}

		public static double Mul(double x, double y)
		{
			double a = 0.0;
			for(int i = 0; i < (int)y; i++)
			{
				a = a + x;
			}
			return a;
		}

		public static int Div(int x, int y)
		{
			int a;
			if(y != 0)
			{
				a = x/y;
			}
			else
			{
				a = 0;
			}

			return a;
		}

		public static double Div(double x, double y)
		{
			int a;
			if (y != 0.0)
			{
				a = x/y;
			}
			else
			{
				a = 0.0;
			}

			return a;
		}

		public static int Exp(int x, int y)
		{
			int a = x;

			for(int i = 1; i < y; i++)
			{
				a = Mult(a, x);
			}

			return a;
		}

		public static double Exp(double x, double y)
		{
			double a = x;

			for (int i = 1; i < (int)y; i++)
			{
				a = Mult(a, x);
			}

			return a;
		}

		public static double Salary(double hr, double wage)
		{
			double a = Mult(Mult(Mult(hr, 4), 12), wage);
			return a;
		}
}

public class Main
{
	public static void main(String[] args) 
	{
		class Salary
		{
			static int iWeekHr = 0;
			static double dHrSalary = 0;
		}

		System.out.println("Enter your weekly hours.\n\n");

		Scanner.in = new Scanner(System.in);
		Salary.iWeekHr = in.nextInt();

		System.out.println("Now enter your hourly wages. \n\n");

		Salary.dHrSalary = in.nextDouble();

		double a = Math.Salary((double)Salary.iWeekHr, Salary.dHrSalary);

		System.ot.println("The Annual Salary is: $" + a + "\n");

		in.close();
	}
}
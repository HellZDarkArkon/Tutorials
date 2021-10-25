package com;

import java.util.Scanner;

public class Main
{
	class Triangle
	{
		double dBase;
		double dHeight;
		double dArea;

		public double TriangleArea(double base, double height)
		{
			return (base * height) / 2;
		}
	}
	public static void main(String[] args) 
	{
		System.out.print("Let's calculate the area of a triangle." + "\n");

		Scanner in = new Scanner(System.in);

		System.out.println("Please input the base of the triangle (in inches).");
		Triangle.dBase = in.nextDouble();

		while (Triangle.dBase <= 0)
		{
			System.out.println("That's invalid.  Please input the base of the triangle (in inches). \n");
			Triangle.dBase = in.nextDouble();
		}

		System.out.println("Please input the height of the triangle (in inches). \n");
		Triangle.dHeight = in.nextDouble();

		while (Triangle.dHeight <= 0)
		{
			System.out.println("That's invalid.  Please input the base of the triangle (in inches). \n");
			Triangle.dHeight = in.nextDouble();
		}

		Triangle.dArea = Triangle.TriangleArea(Triangle.dBase, Triangle.dHeight);
		System.out.println("the area of the triangle is " + dArea);

		input.close();
	}
}
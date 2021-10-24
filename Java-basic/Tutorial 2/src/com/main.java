package com;

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) 
	{
		class Student  //Already knew how to do classes from C++
		{
			static String studentName[] = {"Kayla", "Hammon"}; //Arrays are easy, i just had to look up proper syntax for Java, saved a couple lines of space.
			static int studentAge = 15;
			static double GPA = 3.45;
			static char[] studentInitial = {studentName[0].charAt(0), studentName[1].charAt(1)};
			static boolean perfectAtt = true;
			static int studentNum = 0;
		}

		Scanner in = new Scanner(System.in);
		Student.studentNum = in.nextInt();
		in.close();

		System.out.print("Student Name: " + Student.studentName[0] + "\n" + 
			"Student Age: " + Student.studentAge + "\n" + 
			"Student GPA: " + Student.GPA + "\n" +
			"Student First Initial: " + Student.studentInitial[0] + "\n" +
			"Student Last Initial: " + Student.studentInitial[1] + "\n" +
			"Student Input Number: " + Student.studentNum + "\n" +
			"Student has Perfect Attendance: " + Student.perfectAtt);
	}
}
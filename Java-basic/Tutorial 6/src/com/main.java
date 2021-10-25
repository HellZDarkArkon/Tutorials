/// Separate File Classes in Java Tutorial -- School Profiler Project ///

package com;

public class Main
{
	public static void main(String[] args)
	{
		String[] strName = null;
		Profile prof = new Profile(strName, null, 0, 0);

		prof.strInputName();
		prof.strInputMajor();
		prof.dInputGPA();
		prof.iInputGrad();

		prof.vPrintProf();
	}
}
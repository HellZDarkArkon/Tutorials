/// Tutorial 3 -- Student Record System ///

#include <iostream>

#include "..\header\student.h"
#include "../header/course.h"
#include "../header/grade.h"

int main()
{
	std::string strTemp[2];
	std::string strTemp2;
	int iTemp;
	int8_t iTemp2;
	int iStudID = 0;
	int iCourseID = 0;
	char cTemp;

	Student stud;
	Course crs;
	Grade grd(stud, crs);

	std::cout << "Enter your name." << std::endl;
	std::cin >> strTemp[0]; std::cout << std::endl;
	stud.strNameChange(strTemp[0]);
	iStudID++;
	stud.iChangeID(iStudID);

	std::cout << "Enter your course." << std::endl;
	std::cin >> strTemp2; std::cout << std::endl;
	crs.strNameChange(strTemp2);
	iCourseID++;
	crs.iChangeCourseID(iCourseID);
	std::cout << "Enter current credits." << std::endl;
	std::cin >> iTemp2; std::cout << std::endl;
	crs.iChangeCredits(iTemp2);

	grd.iStudentIDChange(stud.iGetStudentID());
	grd.iCourseIDChange(crs.iGetCourseID());
	std::cout << "Enter your grade." << std::endl;
	std::cin >> cTemp; std::cout << std::endl;
	grd.chrGradeChange(cTemp);

	std::cout << "Student Profile: " << std::endl;
	std::cout << "Name: " << stud.strGetName() << std::endl;
	std::cout << "Student ID: " << stud.iGetStudentID() << std::endl;
	std::cout << "Course: " << crs.strGetName() << std::endl;
	std::cout << "Course ID: " << crs.iGetCourseID() << std::endl;
	std::cout << "Course Credits: " << crs.iGetCredits() << std::endl;
	std::cout << "Grade: " << grd.chrGetGrade() << std::endl;
}
#ifndef GRADE_H
#define GRADE_H

#include <iostream>

class Grade
{
	int iStudentID;
	int iCourseID;
	char cGrade;

	Grade();
	~Grade();

	int iStudentIDChange(int id);
	int iCourseIDChange(int id);
	char chrGradeChange(char grade);
}
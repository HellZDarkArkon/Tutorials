#ifndef GRADE_H
#define GRADE_H

#include <iostream>

#include "student.h"
#include "course.h"

class Grade
{
private:
	int iStudentID;
	int iCourseID;
	char cGrade;

public:
	Grade(Student std, Course crs);
	~Grade();

	void iStudentIDChange(int id);
	void iCourseIDChange(int id);
	void chrGradeChange(char grade);

	int iGetStudentID();
	int iGetCourseID();
	char chrGetGrade();
};

#endif
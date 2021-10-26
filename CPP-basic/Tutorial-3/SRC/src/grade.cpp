#include "\..\header\grade.h"

Grade::Grade()
{
	iStudentID = 0;
	iCourseID = 0;
	cGrade = ' ';
}

Grade::~Grade()
{

}

int Grade::iStudentIDChange(int id)
{
	this.iStudentID = id;
}

int Grade::iCourseIDChange(int id)
{
	this.iCourseID = id;
}

char Grade::chrGradeChange(char grade)
{
	this.cGrade = grade;
}
#include "../header/grade.h"

Grade::Grade(Student std, Course crs)
{
	this->iStudentID = std.iGetStudentID();
	this->iCourseID = crs.iGetCourseID();
	this->cGrade = ' ';
}

Grade::~Grade()
{

}

void Grade::iCourseIDChange(int id)
{
	this->iCourseID = id;
}

void Grade::iStudentIDChange(int id)
{
	this->iStudentID = id;
}

void Grade::chrGradeChange(char grade)
{
	this->cGrade = grade;
}

int Grade::iGetCourseID()
{
	return this->iCourseID;
}

int Grade::iGetStudentID()
{
	return this->iStudentID;
}

char Grade::chrGetGrade()
{
	return this->cGrade;
}
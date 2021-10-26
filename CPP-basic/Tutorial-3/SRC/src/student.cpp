#include "../header/student.h"

Student::Student()
{
	this->iStudentID = 0;
	this->strName = " ";
}

Student::~Student()
{

}

void Student::iChangeID(int id)
{
	this->iStudentID = id;
}

void Student::strNameChange(std::string name)
{
	this->strName = name;
}

int Student::iGetStudentID()
{
	return this->iStudentID;
}

std::string Student::strGetName()
{
	return this->strName;
}
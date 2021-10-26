#include "../header/course.h"

Course::Course()
{
	this->iCourseID = 0;
	this->strName = " ";
	this->iCredits = 0;
}

Course::~Course()
{

}

void Course::iChangeCourseID(int id)
{
	this->iCourseID = id;
}

void Course::iChangeCredits(int8_t credits)
{
	this->iCredits = credits;
}

void Course::strNameChange(std::string name)
{
	this->strName = name;
}

int Course::iGetCourseID()
{
	return this->iCourseID;
}

int8_t Course::iGetCredits()
{
	return this->iCredits;
}

std::string Course::strGetName()
{
	return this->strName;
}
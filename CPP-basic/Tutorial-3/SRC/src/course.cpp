#include "\..\header\course.h"

Course::Course()
{
	this.iID = 0;
	this.strName = " ";
	this.iCredits = 0;
}

Course::~Course()
{

}

int Course::iChangeID(int id)
{
	this.iID = id;
}

int8_t Course::iChangeCredits(int8_t credits)
{
	this.iCredits = credits;
}

std::string strNameChange(std::string name)
{
	this.strName = name;
}
#include "\..\header\student.h"

Student::Student()
{
	iID = 0;
	strName = " ";
}

Student::~Student()
{

}

Student::iIDChange(int id)
{
	this.iID = id;
}

Student::strNameChange(std::string name)
{
	this.strName = name;
}
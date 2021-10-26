#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

class Course
{
private:
	int iID;
	std::string strName;
	int8_t iCredits;

public:
	Course();
	~Course();

	int iChangeID(int id);
	int8_t iChangeCredits(int8_t credits);
	std::string strNameChange(std::string name);

}
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

class Course
{
private:
	int iCourseID;
	std::string strName;
	int8_t iCredits;

public:
	Course();
	~Course();

	void iChangeCourseID(int id);
	void iChangeCredits(int8_t credits);
	void strNameChange(std::string name);

	int iGetCourseID();
	int8_t iGetCredits();
	std::string strGetName();
};

#endif
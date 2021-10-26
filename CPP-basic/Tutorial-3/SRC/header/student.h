#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student
{
private:
	int iStudentID;
	std::string strName;

public:
	Student();
	~Student();

	void iChangeID(int id);
	void strNameChange(std::string name);

	int iGetStudentID();
	std::string strGetName();
};

#endif
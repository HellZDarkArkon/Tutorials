#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student
{
private:
	int iID;
	std::string strName;

public:
	Student();
	~Student();

	void iChangeID(int id);
	void strNameChange(std::string name);
}
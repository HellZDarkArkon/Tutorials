#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student
{
private:
	int iID;
	std::string strName;

	Student();
	~Student();

	void iIDChange(int id);
	void strNameChange(std::string name);
}
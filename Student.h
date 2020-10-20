#pragma once
#include"Person.h"
class Student:public Person
{
private:
	int avg;
	string institute;
public:
	Student(string, long, int, int, string);
	int getAvg ()const { return avg; };
	string getInstitute()const { return institute; };
	void print()const;
};


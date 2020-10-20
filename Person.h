#pragma once
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class Person
{
private:
	string name;
	long id;
	int age;
public:
	Person(string name, long id, int age);
	long getId()const { return id; };
	int getAge()const { return age; };
	string getName()const { return name; };
	virtual void print()const;




};


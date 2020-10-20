#include "Student.h"

Student::Student(string name, long id, int age, int avg=0, string institute="None") :Person(name, id, age) {
	if (avg >= 0)
		this->avg = avg;
	else
		cout << "Average cannot be negative! set to zero.\n";
	 
	this->institute = institute;
}

void Student::print()const{
	Person::print();
	cout << "Average: " << avg << endl
		<< "Institute: " << institute << endl;
}
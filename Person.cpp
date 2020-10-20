#include"Person.h"

Person::Person(string name = "Unknown", long id = 000000000, int age = 0){
	if (sizeof(name) < 10)
		this->name = name;
	else
		cout << "name's length more than 10. Set to default.\n";
		
	if (id > 99999999 && id <= 999999999)
		this->id = id;
	else
		cout << "Wrong id. Set to default.\n";

	if (age > 0 && age < 140)
		this->age = age;
	else
		cout << "Invalid age. Set to default.\n";

}

void Person::print()const {
	cout << "Name: " << name << endl
		<< "ID: " << id << endl
		<< "Age: " << age << endl;
}
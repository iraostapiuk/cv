#include "Person.h"
Person::Person(string name, string surname, int age) :name(name), surname(surname), age(age)
{}
void Person::Print() {
	cout << "Person: " << name << ' ' << surname << ' ' << age << endl;
}
int Person::Get_salary() {
	return 0;
}
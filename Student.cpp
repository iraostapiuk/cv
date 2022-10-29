#include "Student.h"
Student::Student(string name, string surname, int age, string group, int course, int scolarship)
	:Person(name, surname, age), group(group), course(course), scolarship(scolarship) {}
void Student::Print() {
	cout << "Student: " << this->name << ' ' << this->surname << ' ' << this->age << ' ' << this->group
		<< ' ' << this->course << this->scolarship << endl;
}
int Student::Get_salary() {
	return scolarship;
}
#include "Employee.h"
Employee::Employee(string name, string surname, int age, string position, int salary)
	:Person(name, surname, age), position(position), salary(salary)
{}
void Employee::Print() {
	cout << "Employer: " << name << ' ' << surname << ' ' << age << ' ' << position << ' ' << salary << endl;
}
int Employee::Get_salary() {
	return salary;
}
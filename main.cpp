#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include "Teacher.h"
#include"Postgraduate.h"

void print_all(Person** p_persons, int count) {
	for (int i = 0; i < count; i++) {
		p_persons[i]->Print();
	}
}

Person* sort(Person** p_persons, int count) {
	int tmp;
	int x = 0;
	for (int i = count - 1; i >= x; i--)
	{
		for (int j = count - 1; j >= x; j--)
		{
			if (p_persons[j]->Get_salary() < p_persons[j - 1]->Get_salary())
			{
				tmp = p_persons[j]->Get_salary();
				p_persons[j]->Get_salary() = p_person[j - 1]->Get_salary();
				p_persons[j - 1]->Get_salary() = tmp;
			}
		}
		x++;
	}
}

int main() {
	Person person("Person", "s", 25);
	//person.Print();
	Student student("Student", "s", 18, "PmP-32", 3, 3000);
	//student.Print();
	Employee employee("Employer", "s", 35, "plumber", 25000);
	//employer.Print();
	Postgraduate postgraduate("Postgraduate", "s", 45, "juniorspecsalist", 25000, "LNU");
	//postgraduate.Print();
	Teacher teacher("Teacher", "s", 27, "teacher", 6000, "LNU");
	teacher.Print();
	//person = student;
	//person.Print_info();
	// 
	// 
	//Person* p_person = &student;
	////p_person->Print_info();
	
	Person** all = new Person * [5]{ &person,&student,&employee,&teacher,&postgraduate };
	print_all(all, 5);
	cout << "Sorted list: ";
	sort(all, 5)->Print();
	return 0;
}
#include "Student.h"

Student::Student() {
	name = "Unknown";
	age = 0;
	rollNo = 0;
	gpa = 0.0;
}
Student::Student(string n, int a, int r, double g) {
	name = n;
	age = a;
	rollNo = r;
	gpa = g;
}
Student::~Student() {
	cout << "Destructor called for student " << name << endl;
}

void Student::setName(string n) {
	name = n;
}
void Student::setAge(int a) {
	age = a;
}
void Student::setRollNo(int r) {
	rollNo = r;
}
void Student::setGpa(double g) {
	gpa = g;
}

string Student::getName() {
	return name;
}
int Student::getAge() {
	return age;
}
int Student::getRollNo() {
	return rollNo;
}
double Student::getGpa() {
	return gpa;
}

void Student::gradeCal() {
	char grade;
	if (gpa >= 3.5) grade = 'A';
	else if (gpa >= 3.0) grade = 'B';
	else if (gpa >= 2.5) grade = 'C';
	else if (gpa >= 2.0) grade = 'D';
	else grade = 'F';
	cout << "Student's Grade is: " << grade << endl;
}
void Student::displayInfo() {
	cout << "Student's Name is: " << name << endl;
	cout << "Student's Age is: " << age << endl;
	cout << "Student's Roll No is: " << rollNo << endl;
	cout << "Student's GPA is: " << gpa << endl;
}

#include "Student.h"
int main() {
	Student s1;
	cout << "First Student Info Displaying using Default Constructor." << endl;
	s1.displayInfo();
	s1.gradeCal();
	
	cout << endl;


	Student s2("Umar", 20, 78, 3.6);
	cout << "Student 2 Info Displaying Using Parametarized Constructor." << endl;
	s2.displayInfo();
	s2.gradeCal();

	cout << endl;

	Student s3;
	s3.setName("Ali");
	s3.setAge(19);
	s3.setRollNo(75);
	s3.setGpa(2.8);
	cout << "Student 3 Info Displaying Using Parametric Constructor by getter Setter Method." << endl;
	s3.displayInfo();
	s3.gradeCal();
	cout << endl;

	return 0;
}
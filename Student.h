#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	string name;
	int age;
	int rollNo;
	double gpa;
public:
	
	Student();
	
	Student(string n, int a, int r, double g);
	
	~Student();

	void setName(string n);
	void setAge(int a);
	void setRollNo(int r);
	void setGpa(double g);

	string getName();
	int getAge();
	int getRollNo();
	double getGpa();

	void gradeCal();
	void displayInfo();
};



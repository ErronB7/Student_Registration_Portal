#pragma once
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<string>
#include<sstream>



using namespace std;



class Student
{
private:
	string m_name;
	string m_address;
	double m_percentage;
	
public:
	
	static int m_rollNo;

	Student();
	Student(string name,int roll,string address,double percentage);
	Student(const Student &s);
	Student & operator = (const Student &s);
	string getName();
	void setName(string name);
	int getRollNo();
	void setRollNo(int rollNo);
	void setAddress(string Address);
	string getAddress();
	void setPercentage(double percentage);
	double getPercentage();
};



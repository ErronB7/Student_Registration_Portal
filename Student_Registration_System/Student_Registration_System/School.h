#pragma once
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<string>
#include<sstream>
#include<typeinfo>
#include"student.h"
#include<algorithm>
#include<map>

using namespace std;

class School 
{
public:
	string m_SchlName;
	int m_Students;
	int m_classRooms;
	int m_teachers;

	std::map<int, Student>StudentMap;
	//std::map<int, School>SchoolMap;

public:

	

	School();
	School(string name,  int students, int classes, int teachers);
	School(const School &s);
	School & operator = (const School &s);

	string getSchoolName();
	void setSchoolName(string name);
	int getStudents();
	void setStudents(int students);
	int getClasses();
	void setClasses(int classes);
	int getTeachers();
	void setTeachers(int teachers);

	bool isNumber(const string& str);


	void DisplaySchoolInfo();
	void AddStudent();
	void DeleteStudent();
	void SearchStudent();

	/*template<typename T>
	T getType(T arg);*/
	
	


};
#include"School.h"
#include"student.h"

using namespace std;



School::School()
{
	m_SchlName = "Indo Kids International School ";
	m_Students = 100;
	m_classRooms = 20;
	m_teachers = 15;
	                          
	
}
School::School(string name,int students, int classes, int teachers)
{
	m_SchlName = name;
	m_Students = students;
	m_classRooms = classes;
	m_teachers = teachers;

}
School::School(const School &s)
{
	m_SchlName = s.m_SchlName;
	m_Students = s.m_Students;
	m_classRooms = s.m_classRooms;
	m_teachers = s.m_teachers;
}
School & School :: operator =(const School &s)
{
	m_SchlName = s.m_SchlName;
	m_Students = s.m_Students;
	m_classRooms = s.m_classRooms;
	m_teachers = s.m_teachers;
	return*this;
}

string School:: getSchoolName()
{
	return m_SchlName;
};
void School::setSchoolName(string name)
{
	m_SchlName = name;
};
int School::getStudents()
{
	return m_Students;
};
void School::setStudents(int students)
{
	m_Students = students;
};
int School::getClasses()
{
	return m_classRooms;
};
void School::setClasses(int classes)
{
	m_classRooms = classes;
};
int School::getTeachers()
{
	return m_teachers;
};
void School::setTeachers(int teachers)
{
	m_teachers = teachers;
};

//template<class T>
//
//T School::getType(T arg)
//{
//	auto type = typeid(arg).name();
//
//	decltype(arg) X;
//
//	const type_info& t1 = typeid(type);
//	const type_info& t2 = typeid(X);
//
//	if (t1 == t2)
//		return true;
//	else
//		return false;
//}

//bool School:: isNumber(const string& str)
//{
//	for (char const &c : str) {
//		if (std::isdigit(c) == 0) return false;
//	}
//	return true;
//}
bool School:: isNumber(const string &s)
{
	for (int i = 0; i < s.length(); i++)
		if (isdigit(s[i]) == false)
			return false;

	return true;
}
void School::AddStudent()
{
	
	cout << endl << "****************************Student Registration System!!!!!******************" << endl;
	string str_name, str_Address; double percentage;

	Student object;
	bool test = false;
	
	
		std::cout<<endl << "Please enter name of the student:\t" << endl;
		std::cin >> str_name;

		if (isNumber(str_name))
		{
			std::cout<<endl << "Name contains a Number!!!!Error!!\n" << endl;
			return;
		}
		

	
	
		for (map<int, Student>::iterator it = StudentMap.begin(); it != StudentMap.end(); ++it)
		{
			if (it->second.getName() == str_name)
			{
				cout << endl << "Sorry!!! Can't add Student since they appear to already exists in our Database." << endl;
				break;
				return;
			}
		}

		std::cout << "Please enter Address of the student: " << endl;
		std::cin >> str_Address;

		std::cout << "Please enter percentage: " << endl;
		std::cin >> percentage;
		
		cout << endl << "Student Added Successfully!!" << endl;
		
		int id = object.getRollNo();

		object.setName(str_name);

		object.setAddress(str_Address);

		object.setPercentage(percentage);

		StudentMap.insert(std::make_pair(id, object));
		return;

	/*else
	{
		cout << endl << "Please enter valid name." << "current entered value is: " << typeid(str_name).name() << endl;
	}*/
}

void School::DeleteStudent()
{
	system("cls");
	cout << endl << "****************************Student Registration System!!!!!******************" << endl;

	int roll, found{ 0 }, choice;
	string str_Name;

	if (StudentMap.size() <= 0)
	{
		std::cout << "There is currently no student in Schools";
		return;
	}
		

	/*for (map<int, Student>::iterator it = StudentMap.begin(); it != StudentMap.end(); ++it)
	{
		if (it->second.m_rollNo == 0)
		{
			cout << endl << "Sorry!!! Can't Find any entries to delete." << "Please add some students First." << endl;
			exit(1);
		}
	}*/
	cout << endl << "\n\t Please enter Your Deletion Criterion: ";
	cout << "\n\n	1. According to Roll No.";
	cout << "\n\n	2. According to Student name.";

	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << endl << "Please Enter the roll No. of Student to Delete: ";
		cin >> roll;
		
			for (map<int, Student>::iterator it = StudentMap.begin(); it != StudentMap.end(); ++it)
			{
				if (it->first != NULL && it->first == roll)
				{
					StudentMap.erase(it->first);
					
					cout << "\t\t\t\t Student Deleted Successfully!!!";

					found++;
					return;
				}
			}
			if (found == 0)
			{
				cout << " Student NOT found...!!!!";
			}
			break;

	case 2:
	{
		cout << endl << "Enter the Name of Student to Delete: ";
		cin >> str_Name;
		
			for (map<int, Student>::iterator it = StudentMap.begin(); it != StudentMap.end(); ++it)
			{
				if (it->first != NULL && it->second.getName() == str_Name)
				{
					StudentMap.erase(it);

					cout << "\t\t\t\t Student Deleted Successfully!!!";
					
					found++;
					return;
				}
			}
			if (found == 0)
			{
				cout << " Student NOT found...!!!!";
			}
			break;
	}

	}
}
void School::SearchStudent()
{
	int choice, roll;
	string str_Name;

	system("cls");
	cout << endl << "****************************Student Registration System!!!!!******************";

	/*for (map<int, Student>::iterator it = StudentMap.begin(); it != StudentMap.end(); ++it)
	{
		if (it->second.m_rollNo == 0)
		{
			cout << endl << "Sorry!!! Can't Find any entries." << "Please add some students First." << endl;
			exit(1);
		}
	}*/
	if (StudentMap.size() <= 0)
	{
		std::cout << "There is currently no student entries found!!! Please add some entries first!";
		return;
	}
	cout << endl << "\n\t Please enter Your Searching Criterion: ";
	cout << "\n\n	1. According to Roll No.";
	cout << "\n\n	2. According to Student name.";

	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		cout << endl << "Available Roll Numbers: ";
		for (map<int, Student>::iterator it = StudentMap.begin(); it != StudentMap.end(); ++it)
		{
			cout << it->first << " ";
		}
		cout << endl << "Please Enter the roll No. of Student to Search for: ";
		cin >> roll;
		bool bFound = false;

		for (map<int, Student>::iterator it = StudentMap.begin(); it != StudentMap.end(); ++it)
		{//it->second.m_rollNo
			if (it->first == roll)
			{


				cout << "\n\n Student Name: " << it->second.getName();
				cout << "\n\n Roll No: " << it->second.m_rollNo;
				cout << "\n\n Address : " << it->second.getAddress();
				cout << "\n\n Percentage : " << it->second.getPercentage();
				cout << "\n\n\t\t Student Found Successfully!!";
				bFound = true;
				break;

			}
		}

		if (!bFound)
			std::cout << "Student Not Found : " << std::endl;
		break;
	}
	case 2:
	{
		cout << "\n\n Please enter Student NAME: ";
		cin >> str_Name;
		bool bFound2 = false;

		for (map<int, Student>::iterator it = StudentMap.begin(); it != StudentMap.end(); ++it)
		{
			if (it->second.getName() == str_Name)
			{
				cout << "\n\n Student Name: " << it->second.getName();
				cout << "\n\n Roll No: " << it->second.getRollNo();
				cout << "\n\n Address : " << it->second.getAddress();
				cout << "\n\n Percentage : " << it->second.getPercentage();
				cout << "\n\n\t\t Student Found Successfully!!";
				bFound2 = true;
				break;

			}
		}
		if (!bFound2)
			std::cout << "Student Not Found : " << std::endl;
		break;
	}
	}
}

	
void School::DisplaySchoolInfo()
{
	
	system("csl");
	cout << endl << "****************************School Information System!!!!!******************";

	cout << "\n\n Schoon Name : " << m_SchlName << std::endl;
	cout << "\n\n No. of Students : " << m_Students << std::endl;
	cout << "\n\n No. of Classes : " << m_classRooms << std::endl;
	cout << "\n\n No. of Teachers : " << m_teachers << std::endl;
	
}

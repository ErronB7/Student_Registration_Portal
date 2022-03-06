#include"student.h"


using namespace std;


int Student::m_rollNo = 0;

Student::Student()
{
	m_name = " ";
	m_address = " ";
	m_percentage = 0.0;

	m_rollNo++;
}
Student::Student(string name, int roll, string address, double percentage)
{
	m_name = name;
	m_rollNo = roll;
	m_address = address;
	m_percentage = percentage;

	
}
Student::Student(const Student &s)
{
	m_name = s.m_name;
	m_rollNo = s.m_rollNo;
	m_address = s.m_address;
	m_percentage = s.m_percentage;
}
Student & Student :: operator = (const Student &s)
{
	m_name = s.m_name;
	m_rollNo = s.m_rollNo;
	m_address = s.m_address;
	m_percentage = s.m_percentage;

	return*this;
}
void Student::setName(string name)
{
	m_name = name;
};
string Student::getName()
{
	return m_name;
};
int Student::getRollNo()
{
	return m_rollNo;
};
void Student::setRollNo(int rollNo)
{
	m_rollNo = rollNo;
};
void Student:: setAddress(string Address)
{
	m_address = Address;
};
string Student::getAddress()
{
	return m_address;
};
void Student:: setPercentage(double percentage)
{
	m_percentage = percentage;
};
double Student::getPercentage()
{
	return m_percentage;
};

//
//void Student::DeleteStudent()
//{
//	system("cls");
//	cout << endl << "****************************Student Registration System!!!!!******************" << endl;
//	
//	int roll, found{ 0 },choice;
//	string name;
//	if (i == 0)
//	{
//		cout << endl << "Error!!!!!!!!! No Entries to delete!!" << endl;
//	}
//	else
//	{
//		
//		cout << endl << "\n\t Please enter Your Deletion Criterion: ";
//		cout << "\n\n	1. According to Roll No.";
//		cout << "\n\n	2. According to Student name.";
//
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1:
//			cout << endl << "Enter the roll No. of Student to Delete: ";
//			cin >> roll;
//
//			for (int a = 0; a < i; ++a)
//			{
//				if (roll == arr[i].m_rollNo)
//				{
//					for (int j = a; j < i; ++j)
//					{
//						arr[j].m_name = arr[j + 1].m_name;
//						arr[j].m_rollNo = arr[j + 1].m_rollNo;
//						arr[j].m_address = arr[j + 1].m_address;
//						arr[j].m_percentage = arr[j + 1].m_percentage;
//					}
//					cout << "\t\t\t\t Student Deleted Successfully!!!";
//					--i;
//					found++;
//				}
//			}
//			if (found == 0)
//			{
//				cout << " Student NOT found...!!!!";
//			}
//		case 2:
//			cout << endl << "Enter the Name of Student to Delete: ";
//			cin >> name;
//
//			for (int a = 0; a < i; ++a)
//			{
//				if (name == arr[i].m_name)
//				{
//					for (int j = a; j < i; ++j)
//					{
//						arr[j].m_name = arr[j + 1].m_name;
//						arr[j].m_rollNo = arr[j + 1].m_rollNo;
//						arr[j].m_address = arr[j + 1].m_address;
//						arr[j].m_percentage = arr[j + 1].m_percentage;
//					}
//					cout << "\t\t\t\t Student Deleted Successfully!!!";
//					--i;
//					found++;
//				}
//			}
//			if (found == 0)
//			{
//				cout << " Student NOT found...!!!!";
//			}
//		}
//	}
//};
//void Student::SearchStudent()
//{
//	int found = 0, choice, roll;
//	string name;
//	system("csl");
//	cout <<endl<< "****************************Student Registration System!!!!!******************";
//
//	if (i == 0)
//	{
//		cout << endl << "Error!!!!!!!!! No Entries found!!" << endl;
//	}
//	else
//		{
//		cout << endl << "\n\t Please enter Your Searching Criterion: ";
//		cout << "\n\n	1. According to Roll No.";
//		cout << "\n\n	2. According to Student name.";
//
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1:
//			cout << "\n\n Please enter Roll no: ";
//			cin >> roll;
//			for (int a = 0; a < i; ++a)
//			{
//				if (roll == arr[a].m_rollNo)
//				{
//					cout << "\n\n Student Name: " << arr[a].m_name;
//					cout << "\n\n Roll No: " << arr[a].m_rollNo;
//					cout << "\n\n Address : " << arr[a].m_address;
//					cout << "\n\n Percentage : " << arr[a].m_percentage;
//					cout << "\n\n\t\t Student Found Successfully!!";
//
//					found++;
//				}
//			}
//			if (found == 0)
//			{
//				cout << endl << "\n\n Student  NOT found !!!";
//			}
//
//		case 2:
//			cout << "\n\n Please enter Student NAME: ";
//			cin >> name;
//			for (int a = 0; a < i; ++a)
//			{
//				if (name == arr[a].m_name)
//				{
//					cout << "\n\n Student Name: " << arr[a].m_name;
//					cout << "\n\n Roll No: " << arr[a].m_rollNo;
//					cout << "\n\n Address : " << arr[a].m_address;
//					cout << "\n\n Percentage : " << arr[a].m_percentage;
//					cout << "\n\n\t\t Student Found Successfully!!";
//
//					found++;
//				}
//			}
//			if (found == 0)
//			{
//				cout << endl << "\n\n Student  NOT found !!!";
//			}
//		}
//	}
//};
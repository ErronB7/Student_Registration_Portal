// Student_Registration_System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"student.h"
#include"School.h"

using namespace std;


int main()
{
	std::shared_ptr<School> pSchoolPtr = std::make_shared<School>();
	
	int choice = -1;
	while (choice != 0)
	{
		std::cout << endl << "***************Welcome to Student Registration Portal!!!!************" << endl;
		std::cout << endl << "\t\t 1. Student Entry" << endl;
		std::cout << "\t\t 2. Delete Student" << endl;
		std::cout << "\t\t 3. Search Student" << endl;
		std::cout << "\t\t 4. Display School information." << endl;
		std::cout << "\t\t 0. Exit" << endl;

		std::cout << endl << "Please select one of the choice from below: " << endl;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			pSchoolPtr->AddStudent();
			break;

		case 2:
			pSchoolPtr->DeleteStudent();
			break;

		case 3:
			pSchoolPtr->SearchStudent();
			break;

		case 4:
			pSchoolPtr->DisplaySchoolInfo();
			break;

		case 0:
			exit(1);
			break;

		dafault:
			cout << endl << "Please enter Valid Choice!!!!!!!!" << endl;
			break;
		}

	}

	

		return 0;
}


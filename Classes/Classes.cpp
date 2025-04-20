// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Database.h"

int main()
{
	Database db;
	bool quit = false;

	while (!quit) {
		std::cout << "\n1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
		int choice;
		std::cin >> choice;

		switch (choice) {
		case 1: {
			std::cout << "Enter type (0 for CAT, 1 for DOG): ";
			int t;
			std::cin >> t;
			db.Create(static_cast<BaseAnimal::eType>(t));
			break;
		}
		case 2:
			db.DisplayAll();
			break;
		case 3: {
			std::cout << "enter name: ";
			std::string name;
			std::cin >> name;
			db.Display(name);
			break;
		}
		case 4: {
			std::cout << "Enter type (0 for CAT, 1 for DOG): ";
			int t;
			std::cin >> t;
			db.Display(static_cast<BaseAnimal::eType>(t));
			break;
		}
		case 5:
			quit = true;
			break;

		}
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

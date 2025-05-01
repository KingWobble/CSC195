

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



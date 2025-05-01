#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include <iostream>
#include <memory>
#include "Database.h"

int main() {
    Database* database = new Database;

    int choice = 0;
    while (choice != 7) {
        std::cout << "\n--- Animal Database Menu ---\n";
        std::cout << "1) Create\n";
        std::cout << "2) Display All\n";
        std::cout << "3) Display Name\n";
        std::cout << "4) Display Type\n";
        std::cout << "5) Load\n";
        std::cout << "6) Save\n";
        std::cout << "7) Quit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::cout << "Select type: 0 = Cat, 1 = Dog: ";
            int typeInt;
            std::cin >> typeInt;
            auto animal = database->Create(typeInt);
            if (animal) {
                std::cin >> *animal;
                database->Add(std::move(animal));
            }
            break;
        }
        case 2:
            database->DisplayAll();
            break;
        case 3: {
            std::cout << "Enter name: ";
            std::string name;
            std::cin >> name;
            database->DisplayByName(name);
            break;
        }
        case 4: {
            std::cout << "Select type: 0 = Cat, 1 = Dog: ";
            int typeInt;
            std::cin >> typeInt;
            database->DisplayByType(static_cast<BaseAnimal::eType>(typeInt));
            break;
        }
        case 5: {
            std::cout << "Enter filename to load from: ";
            std::string filename;
            std::cin >> filename;
            database->Load(filename);
            break;
        }
        case 6: {
            std::cout << "Enter filename to save to: ";
            std::string filename;
            std::cin >> filename;
            database->Save(filename);
            break;
        }
        case 7:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid choice.\n";
            break;
        }
    }

    delete database;
    _CrtDumpMemoryLeaks();
    return 0;
}
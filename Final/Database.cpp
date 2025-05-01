#include "Database.h"
#include "Cat.h"
#include "Dog.h"
#include <fstream>
#include <iostream>

void Database::Add(std::unique_ptr<BaseAnimal> animal) {
    animals.push_back(std::move(animal));
}

void Database::DisplayAll() {
    for (const auto& animal : animals) {
        std::cout << *animal;
    }
}

void Database::DisplayByName(const std::string& name) {
    for (const auto& animal : animals) {
        if (animal->GetName() == name) {
            std::cout << *animal;
        }
    }
}

void Database::DisplayByType(BaseAnimal::eType type) {
    for (const auto& animal : animals) {
        if (animal->GetType() == type) {
            std::cout << *animal;
        }
    }
}

std::unique_ptr<BaseAnimal> Database::Create(BaseAnimal::eType type) {
    switch (type) {
    case BaseAnimal::eType::CAT:
        return std::make_unique<Cat>();
    case BaseAnimal::eType::DOG:
        return std::make_unique<Dog>();
    default:
        return nullptr;
    }
}

std::unique_ptr<BaseAnimal> Database::Create(int type) {
    return Create(static_cast<BaseAnimal::eType>(type));
}

void Database::Load(const std::string& filename) {
    std::ifstream input(filename);
    if (input.is_open()) {
        Clear();
        while (!input.eof()) {
            int type;
            input >> type;
            if (input.fail()) break; // Stop if reading type fails

            auto animal = Create(type);
            if (animal) {
                input >> *animal;
                animals.push_back(std::move(animal));
            }
        }
    }
}

void Database::Save(const std::string& filename) {
    std::ofstream output(filename);
    if (output.is_open()) {
        for (const auto& animal : animals) {
            output << static_cast<int>(animal->GetType()) << "\n";
            output << *animal;
        }
    }
}

void Database::Clear() {
    animals.clear(); // smart pointers clean up automatically
}
#include "BaseAnimal.h"

BaseAnimal::~BaseAnimal() {}

void BaseAnimal::Read(std::ostream& ostream, std::istream& istream) {
	ostream << "Enter name: ";
	istream >> name;
	ostream << "Enter age: ";
	istream >> age;
}

void BaseAnimal::Write(std::ostream& ostream) {
	ostream << "Name: " << name << ", Age: " << age << "\n";
}

std::string BaseAnimal::GetName() const {
return name;
}
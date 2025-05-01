#include "BaseAnimal.h"

// Console IO
void BaseAnimal::Read(std::ostream& ostream, std::istream& istream) {
    ostream << "Enter name: ";
    istream >> name;
    ostream << "Enter age: ";
    istream >> age;
}

void BaseAnimal::Write(std::ostream& ostream) {
    ostream << "Name: " << name << ", Age: " << age << "\n";
}

// File IO
void BaseAnimal::Read(std::ifstream& ifstream) {
    ifstream >> name >> age;
}

void BaseAnimal::Write(std::ofstream& ofstream) {
    ofstream << name << std::endl;
    ofstream << age << std::endl;
}

std::string BaseAnimal::GetName() const {
    return name;
}

// Console stream operator overloads
std::istream& operator>>(std::istream& istream, BaseAnimal& animal) {
    animal.Read(std::cout, istream);
    return istream;
}

std::ostream& operator<<(std::ostream& ostream, BaseAnimal& animal) {
    animal.Write(ostream);
    return ostream;
}

// File stream operator overloads
std::ifstream& operator>>(std::ifstream& ifstream, BaseAnimal& animal) {
    animal.Read(ifstream);
    return ifstream;
}

std::ofstream& operator<<(std::ofstream& ofstream, BaseAnimal& animal) {
    animal.Write(ofstream);
    return ofstream;
}
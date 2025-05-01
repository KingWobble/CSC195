#include "Dog.h"

void Dog::Read(std::ostream& ostream, std::istream& istream) {
    BaseAnimal::Read(ostream, istream);
    ostream << "Enter breed: ";
    istream >> breed;
}

void Dog::Write(std::ostream& ostream) {
    BaseAnimal::Write(ostream);
    ostream << "Breed: " << breed << "\n";
}

void Dog::Read(std::ifstream& istream) {
    BaseAnimal::Read(istream);
    istream >> breed;
}

void Dog::Write(std::ofstream& ostream) {
    BaseAnimal::Write(ostream);
    ostream << breed << std::endl;
}

BaseAnimal::eType Dog::GetType() {
    return eType::DOG;
}
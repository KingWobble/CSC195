#include "Cat.h"

void Cat::Read(std::ostream& ostream, std::istream& istream) {
    BaseAnimal::Read(ostream, istream);
    ostream << "Enter number of lives: ";
    istream >> lives;
}

void Cat::Write(std::ostream& ostream) {
    BaseAnimal::Write(ostream);
    ostream << "Lives: " << lives << "\n";
}

void Cat::Read(std::ifstream& istream) {
    BaseAnimal::Read(istream);
    istream >> lives;
}

void Cat::Write(std::ofstream& ostream) {
    BaseAnimal::Write(ostream);
    ostream << lives << std::endl;
}

BaseAnimal::eType Cat::GetType() {
    return eType::CAT;
}
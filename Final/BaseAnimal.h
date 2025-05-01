#pragma once
#include <string>
#include <iostream>
#include <fstream>

class BaseAnimal {
public:
    enum class eType { CAT, DOG };

    virtual ~BaseAnimal() {}

    // Console IO
    virtual void Read(std::ostream& ostream, std::istream& istream);
    virtual void Write(std::ostream& ostream);

    // File IO
    virtual void Read(std::ifstream& ifstream);
    virtual void Write(std::ofstream& ofstream);

    std::string GetName() const;
    virtual eType GetType() = 0;

protected:
    std::string name;
    int age;
};

// Console stream operator overloads
std::istream& operator>>(std::istream& istream, BaseAnimal& animal);
std::ostream& operator<<(std::ostream& ostream, BaseAnimal& animal);

// File stream operator overloads
std::ifstream& operator>>(std::ifstream& ifstream, BaseAnimal& animal);
std::ofstream& operator<<(std::ofstream& ofstream, BaseAnimal& animal);
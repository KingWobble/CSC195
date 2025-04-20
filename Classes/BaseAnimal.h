#pragma once
#include <string>
#include <iostream>

class BaseAnimal {
public:
	enum class eType { CAT, DOG };

	virtual ~BaseAnimal();

	virtual void Read(std::ostream& ostream, std::istream& istream) = 0;
	virtual void Write(std::ostream& ostream) = 0;

	std::string GetName() const;
	virtual eType GetType() = 0;

protected:
	std::string name;
	int age;

};
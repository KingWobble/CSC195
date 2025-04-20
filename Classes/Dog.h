#pragma once
#include "BaseAnimal.h"

class Dog : public BaseAnimal {
public:
	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	eType GetType() override;

private:
	std::string breed;
};

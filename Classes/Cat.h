#pragma once
#include "BaseAnimal.h"

class Cat : public BaseAnimal {
public:
	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	eType GetType() override;

private:
	int lives;
};

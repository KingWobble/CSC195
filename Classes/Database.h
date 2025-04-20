#pragma once
#include <vector>
#include "Cat.h"
#include "Dog.h"

class Database {
public:
	~Database();

	void Create(BaseAnimal::eType type);
	void DisplayAll();
	void Display(const std::string& name);
	void Display(BaseAnimal::eType type);


private:
	std::vector<BaseAnimal*> animals;
};

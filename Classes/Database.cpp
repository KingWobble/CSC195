#include "Database.h"

Database::~Database() {
	for (BaseAnimal* a : animals) {
		delete a;
	}
}

void Database::Create(BaseAnimal::eType type) {
	BaseAnimal* a = nullptr;
	switch (type) {
		case BaseAnimal::eType::CAT: a = new Cat(); break;
		case BaseAnimal::eType::DOG: a = new Dog(); break;
	}

	if (a) {
		a->Read(std::cout, std::cin);
		animals.push_back(a);
	}
}

void Database::DisplayAll() {
    for (BaseAnimal* a : animals) {
        a->Write(std::cout);
    }
}

void Database::Display(const std::string& name) {
    for (BaseAnimal* a : animals) {
        if (a->GetName() == name) {
            a->Write(std::cout);
        }
    }
}

void Database::Display(BaseAnimal::eType type) {
    for (BaseAnimal* a : animals) {
        if (a->GetType() == type) {
            a->Write(std::cout);
        }
    }
}

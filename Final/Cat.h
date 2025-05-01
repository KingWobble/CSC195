#pragma once
#include "BaseAnimal.h"

class Cat : public BaseAnimal {
public:
    void Read(std::ostream& ostream, std::istream& istream) override;
    void Write(std::ostream& ostream) override;
    void Read(std::ifstream& istream) override;
    void Write(std::ofstream& ostream) override;
    eType GetType() override;

private:
    int lives;
};

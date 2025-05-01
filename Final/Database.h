#pragma once
#include <vector>
#include <memory>
#include <string>
#include "BaseAnimal.h"

class Database {
public:
    void Add(std::unique_ptr<BaseAnimal> animal);
    void DisplayAll();
    void DisplayByName(const std::string& name);
    void DisplayByType(BaseAnimal::eType type);

    void Load(const std::string& filename);
    void Save(const std::string& filename);

    std::unique_ptr<BaseAnimal> Create(BaseAnimal::eType type);
    std::unique_ptr<BaseAnimal> Create(int type);

    void Clear();

private:
    std::vector<std::unique_ptr<BaseAnimal>> animals;
};
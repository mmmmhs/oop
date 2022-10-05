#pragma once

#include"animal.h"
#include<vector>
using namespace std;

void action(Animal* animal, std::vector<Dog> & dogzone, std::vector<Bird> & birdzone)
{
    Dog* d = dynamic_cast<Dog*>(animal);
    Bird* b = dynamic_cast<Bird*>(animal);
    if(d != nullptr)
        dogzone.push_back(move(*d));
    else if(b != nullptr)
        birdzone.push_back(move(*b));
}

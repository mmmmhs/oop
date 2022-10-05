#ifndef FARM_H
#define FARM_H

#include "Cow.h"
#include <string>

class Farm{
private:
    int n;
    Cow* cows = nullptr;
public:
    void addCow(Cow cow1);
    void supply(std::string str, int aa);
    void startMeal();
    void produceMilk();
    float getMilkProduction();
    Farm(int nn);
};

#endif
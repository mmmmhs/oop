#pragma once

#include "what.h"
#include <string>
using namespace std;

class Alien : public WhatCanMotion, public WhatCanSpeak{
private:
    string name;
public:
    Alien(string n) : name(n){}
    ~Alien(){}
    void speak() override{
        cout << name << " is speaking" << endl;
    };
    void motion() override{
        cout << name << " is moving" << endl;
    };
    void stop() override{
        cout << name << " stops" << endl;
    };
};


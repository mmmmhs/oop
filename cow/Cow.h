#ifndef COW_H
#define COW_H

#include <string>
class Cow {
private:
    std::string name;
    int l, u, m;
    int food;
    float milk;
public:
    Cow(std::string nn, int ll, int uu, int mm);
    Cow(); 
    std::string getname(); 
    void addf(int s);
    bool foodne();
    bool foode();
    bool foodm();
    void milkne();
    void milke();
    void milkm(); 
    float getmilk(); 
};

#endif
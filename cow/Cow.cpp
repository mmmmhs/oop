#include "Cow.h"

Cow::Cow(std::string nn, int ll, int uu, int mm){
    name = nn;
    l = ll;
    u = uu;
    m = mm;
    food = 0;
    milk = 0;
}
Cow::Cow(){
    name = "no name";
    l = 0;
    u = 0;
    m = 0;
    food = 0;
    milk = 0;
}
std::string Cow::getname(){
    return name;
} 
void Cow::addf(int s){
    food += s;
}
bool Cow::foodne(){
    return((food > 0) && (food < l));
}
bool Cow::foode(){
    return((food >= l) && (food <= u));
}
bool Cow::foodm(){
    return(food > u);
}
void Cow::milkne(){
    milk += 0.5*m;
    food = 0;
}
void Cow::milke(){
    milk += m;
    food = 0;
}
void Cow::milkm(){
    milk += m;
    food -= u;
}
float Cow::getmilk(){
    return milk;
}
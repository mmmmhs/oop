#include "Farm.h"
#include "Cow.h"
#include <string>

int num = 0;

Farm::Farm(int nn){
    n = nn;
    cows = new Cow[nn];
}
void Farm::addCow(Cow cow1){
    cows[num] = cow1;
    num++;
}
void Farm::supply(std::string str, int aa){
    for(int i = 0; i < num; i++)
    {
        if(cows[i].getname() == str)
            cows[i].addf(aa); 
    }
}
void Farm::startMeal(){
    for(int i = 0; i < num; i++){
        if(cows[i].foodne()) 
            cows[i].milkne();
        if(cows[i].foode())
            cows[i].milke();
        if(cows[i].foodm())
            cows[i].milkm();
    }
}
void Farm::produceMilk(){
    return;
}
float Farm::getMilkProduction(){
    float sum = 0;
    for(int i = 0; i < num; i++)
        sum += cows[i].getmilk();
    return sum;
}

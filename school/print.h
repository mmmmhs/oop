#ifndef PRINT
#define PRINT

#include <string>
#include <iostream>
using namespace std;

class print{
private:
    string str;
public:
    print(string s);
    friend ostream& operator<< (ostream& out, const print& p);    
};

#endif
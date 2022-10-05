#include "print.h"
using namespace std;

print::print(string s){
    str = s;
}

ostream& operator<< (ostream& out, const print& p)
{
    out << p.str << endl;
    return out;
}
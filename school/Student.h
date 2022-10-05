#ifndef STU
#define STU

#include <string>
using namespace std;

class Student{
private:
    string name;
    char province;
    int grade;
    int time;
    int id;
    string data; 
    friend class School;  
public:
    friend istream& operator>> (istream& in, Student& st);
    bool operator> (const Student a); 
};

#endif
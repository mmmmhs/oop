#ifndef SCH
#define SCH

#include "Student.h"
#include "print.h"
using namespace std;

class School{
private:
    int num = 0; 
    Student* stu; 
public:
    School(int num);
    void add_member(Student st);
    print operator[] (const char prov);
    print operator[] (const int id);
    print operator[] (const string nm);
};

#endif
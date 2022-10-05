#include "Student.h"

istream& operator>> (istream& in, Student& st){
    in >> st.data;
    return in;
};

bool Student::operator> (const Student a)
{
    if(time > a.time)
        return true;
    else if(time < a.time)
        return false;
    else if(id >= a.id)
        return true;
    else 
        return false;
}
#include "School.h"
#include "print.h"
#include <cstring>

School::School(int num){
    stu = new Student[num];
}

void School::add_member(Student st){
    stu[num].data = st.data;
    const char* str = st.data.c_str();
    int len = strlen(str);
    int mark = -1;
    char set[5][21];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 21; j++)
            set[i][j] = '\0';
    }
    for(int j = 0; j < 5; j++)
    {
        for(int i = mark + 1; i <= len; i++)
        {
            if((str[i] == '-')||(i == len))
            {
                for(int k = 0; k < i - mark - 1; k++)
                    set[j][k] = str[mark + k + 1];
                mark = i;
                break;    
            }
        }
    }
    stu[num].name = set[0];
    stu[num].province = *set[1];
    stu[num].grade = atoi(set[2]);
    stu[num].time = atoi(set[3]);
    stu[num].id = atoi(set[4]);
    string s1 = set[0];
    string s2 = set[2];
    string s3 = set[3];
    string s4 = set[4];
    string ss = "-";
    stu[num].data = s1 + ss + s3 + ss + s2 + ss + s4;
    num++;
}

print School::operator[] (const char prov){
    Student s;
    s.time = 0;
    s.data = "Not Found";
    for(int i = 0; i < num; i++)
    {
        if((stu[i].province == prov)&&(stu[i] > s))
            s = stu[i];
    }
    print p(s.data);
    return p;
}

print School::operator[] (const int id)
{
    for(int i = 0; i < num; i++)
    {
        if(stu[i].id == id)
        {
            print p(stu[i].data);
            return p;
        }   
    }
    string str = "Not Found";
    print p(str);
    return p;
}

print School::operator[] (const string nm)
{
    for(int i = 0; i < num; i++)
    {
        if(stu[i].name == nm)
        {
            print p(stu[i].data);
            return p;
        }
    }
    string str = "Not Found";
    print p(str);
    return p;
}
#pragma once

#include <string>
using namespace std;

class chat{
private :
    int id;
    int order;
    string str;
public:
    static int count;
    chat(int n, string s, int o) : id(n), str(s), order(o){count++;}
    chat(){id = -23333333;}
    ~chat(){}
    void show();
    int get();
    int ord();
    void add(string ss);
};
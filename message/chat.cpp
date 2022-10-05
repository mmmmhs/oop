#include "chat.h"
#include <iostream>
using namespace std;

int chat::count = 0;

void chat::show()
{
    int k = str.size();
    for(int i = str.size()-1; i >= 0; i--)
    {
        if(str[i] == '/')
        {
            for(int j = i + 1; j < k; j++)
                cout << str[j];
            cout << endl;
            k = i;
        }
    }
    for(int j = 0; j < k; j++)
        cout << str[j];
    cout << endl;        
}

int chat::get()
{
    return id;
}

int chat::ord()
{
    return order;
}

void chat::add(string ss)
{
    str += ('/' + ss);
    order = count++;
}
#include "chat.h"
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(chat c1, chat c2)
{
    return c1.ord() > c2.ord();
}

int main(){
    int M, N;
    cin >> N;
    chat* list1 = new chat[N];
    for(int i = 0; i < N; i++)
    {
        int nn;
        string s1;
        cin >> nn >> s1;
        list1[i] = chat(nn, s1, chat::count);
    }
    cin >> M;
    chat* list2 = new chat[M];
    int num = 0;
    for(int i = 0; i < M; i++)
    {
        int mm;
        string s2;
        cin >> mm >> s2;
        bool neo = true;
        for(int j = 0; j < N; j++)
        {
            if(list1[j].get() == mm)
            {
                list1[j].add(s2);
                neo = false;
                break;
            } 
        }
        for(int j = 0; j < num; j++){  
            if(list2[j].get() == mm)
            {
                list2[j].add(s2);
                neo = false;
                break;
            }        
        }
        if(neo)
        {
            list2[num] = chat(mm, s2, chat::count);
            num++;
        }    
    }
    chat* list = new chat[N + num];
    for(int i = 0; i < N; i++)
        list[i] = list1[i];
    for(int i = 0; i < num; i++)
        list[i + N] = list2[i];
    sort(list, list + N + num, cmp);
    for(int i = 0; i < N + num; i++)
    {
        cout << list[i].get() << endl;
        list[i].show();
    }
    return 0;    
}

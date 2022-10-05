#include "Parser.h"
#include <cstring>
#include <iostream>

char *arg[4] = {"--one", "--two", "--three"};

bool hashelp(char** v,int c)
{
    for(int i = 1; i < c; i++)
    {
        if(!strcmp(v[i], "--help"))
            return true;
    }
    return false;
}

bool isalnum(const char* st)
{
    int l = strlen(st);
    for(int i = 0; i < l; i++){
        if(('0' > st[i]) || (st[i] > '9'))
            return false;
    }
    return true;
}

void Parser::add_argument(const char* str1, int n, const char* str2)
{
    if(!strcmp(str1, "--one"))
        num[0] = n;
    if(!strcmp(str1, "--two"))
        num[1] = n;
    if(!strcmp(str1, "--three"))
        num[2] = n;        
}

void Parser::init(int c, char** v)
{    
    if(hashelp(v, c))
    {
        std::cout << "usage: ./main [--help] [--one ONE] [--two TWO] [--three THREE]";
        std::cout << std::endl << std::endl;
        std::cout << "optional arguments:" << std::endl;
        std::cout << " --help   show this help message and exit" << std::endl;
        std::cout << " --one ONE   First number" << std::endl;
        std::cout << " --two TWO   Next number" << std::endl;
        std::cout << " --three THREE   Third number" << std::endl;
        exit(0);
    }
    else 
    {
        for(int i = 1; i <= c / 2; i++)
        {
            int cnt = 0;
            for(int k = 0; k < 3; k++)
            {
                if((!strcmp(v[2 * i - 1], arg[k])))  
                {
                    if(2 * i >= c)
                    {
                        std::cout << "usage: ./main [--help] [--one ONE] [--two TWO] [--three THREE]";
                        std::cout << std::endl;
                        std::cout << "./main: error: argument " << v[c - 1] <<": expected an argument";
                        exit(0);
                    }
                    else if(isalnum(v[2 * i]))
                    {
                        num[k] = atoi(v[2 * i]);
                        break;
                    }
                    else
                    {
                        std::cout << "usage: ./main [--help] [--one ONE] [--two TWO] [--three THREE]";
                        std::cout << std::endl << "./main: error: argument " << v[2 * i - 1];
                        std::cout << ": invalid int value: '" << v[2 * i] << "'";
                        exit(0);
                    } 
                }
                else
                {
                    cnt++;
                }
                if(cnt == 3)
                {
                    std::cout << "usage: ./main [--help] [--one ONE] [--two TWO] [--three THREE]";
                    std::cout << std::endl << "./main: error: unrecognized arguments: " << v[2 * i - 1];
                    exit(0);
                }
            }
        }       
    }
}

int Parser::get_argument(const char* str)
{
    if(!strcmp(str, "one"))
        return num[0];
    if(!strcmp(str, "two"))
        return num[1];
    if(!strcmp(str, "three"))
        return num[2];    
}
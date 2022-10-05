#ifndef PARSER_H
#define PARSER_H

class Parser {
private:
    int num[3];    
public: 
    void add_argument(const char* str1, int n, const char* str2);
    void init(int c, char** v);
    int get_argument(const char* str);
};
#endif
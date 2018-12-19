#ifndef SIMULATOR9492YN_LEXER_H
#define SIMULATOR9492YN_LEXER_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;
class Lexer{
    string line;
public:
    void setLine(string line){this->line=line;}
    vector<string> lexicalAnalysis ();
    string getLine(){
        return this->line;
    }
};


#endif //SIMULATOR9492YN_LEXER_H

#include "Lexer.h"
#include <regex>


void printVector(vector<string> vec){
    for (auto x : vec){
        cout << x << " ";
    }
}

bool checkChar (regex r, string str){
    smatch match;
    regex_search(str,match,r);
    if(match.size()>=1){
        return true;
    }
    return false;
}

void validExpression(string expression,bool* head,bool* back){
    cout << expression << endl;
    string str;
    regex reg ("[-*/+]");
    regex r1 ("[(]");
    regex r2 ("[)]");
    bool answer;
    char start = expression[0];
    char end = expression[expression.length()-1];
    str.push_back(start);
    answer = checkChar(r1, str);
    if(answer) {
        *head = true;
        *back = false;
        return;
    }
    answer = checkChar(r2, str);
    if(answer) {
        *head = false;
    } else{
        answer = checkChar(reg,str);
        if(answer){
            *head = false;
        } else {
            *head = true;
        }
    }
    str.pop_back();
    str.push_back(end);
    answer = checkChar(r1,str);
    if(answer){
        *back = false;
        return;
    }
    answer = checkChar(r2,str);
    if(answer){
        *head = false;
        *back = true;
        return;
    }
    answer = checkChar(reg,str);
    if(answer) {
        *back = false;
    } else {
        *back = true;
    }
}

vector<string> Lexer::lexicalAnalysis() {
    vector<string> commands;
    string str = this->getLine();
    string buffer;
    regex regex1 ("[^\n\t ]+");
    smatch match;
    bool flag = false;
    bool front;
    bool back;
    while (regex_search(str,match,regex1)){
        buffer = match.str((0));
        str = match.suffix().str();
        validExpression(buffer,&front,&back);
        if(flag && commands.size()>0){
            string temp = commands.back();
            temp = temp+buffer;
            commands.pop_back();
            commands.push_back(temp);
        } else{
            if(front){
                commands.push_back(buffer);
            } else {
                if(commands.size()>0){
                    string temp = commands.back();
                    temp = temp+buffer;
                    commands.pop_back();
                    commands.push_back(temp);
                } else{
                    commands.push_back(buffer);
                }
            }
        }
        if(!back){
            flag = true;
        } else{
            flag = false;
        }
    }
    printVector(commands);
    return commands;
}



#include "Expression.h"
#include <string>
#include <map>

#ifndef SIMULATOR9492YN_MASTER_VAR_H
#define SIMULATOR9492YN_MASTER_VAR_H

// var holds characters as variables of an expression
class Var: public Expression {
private:
    // var stores the variable, vars is the current map of variables
    string var;
    map<string, Expression*> vars;

public:
    // constructor
    Var(string variable, map<string, Expression*> variables) {
        this->var = variable;
        this->vars = variables;
    }

    double calculate() override {
        // checking for prior info about the variable (has to be initiated)
        if (vars.count(var) > 0) {
            return vars.at(var)->calculate();
        }
        throw "expression does not exist";
    }

};

#endif //SIMULATOR9492YN_MASTER_VAR_H

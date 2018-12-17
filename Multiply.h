#ifndef SIMULATOR9492YN_MULTIPLY_H
#define SIMULATOR9492YN_MULTIPLY_H

#include "BinaryExpression.h"

class Multiply : public BinaryExpression {
public:
    // constructor - uses super class constructor
    Multiply(Expression* leftExp, Expression* rightExp):BinaryExpression(leftExp,rightExp){}

    double calculate() override{
        if(this->getRightExp()->calculate() == 0){
            throw "cannot divide by 0";
        }
        return this->getLeftExp()->calculate() * this->getRightExp()->calculate();
    }
};

#endif //SIMULATOR9492YN_MULTIPLY_H

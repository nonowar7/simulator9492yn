

#ifndef SIMULATOR9492YN_MINUS_H
#define SIMULATOR9492YN_MINUS_H

#include <list>
#include <string>

#include "BinaryExpression.h"


using namespace std;

class Minus : public BinaryExpression {

public:

    // constructor - uses super class constructor
    Minus(Expression* exp1, Expression* exp2);

    double calculate() override;

};

#endif //SIMULATOR9492YN_MINUS_H



#ifndef SIMULATOR9492YN_DIVIDE_H
#define SIMULATOR9492YN_DIVIDE_H

#include <list>
#include <string>

#include "BinaryExpression.h"

using namespace std;


class Divide : public BinaryExpression {

public:

    // constructor - uses super class constructor
    Divide(Expression* exp1, Expression* exp2);

    double calculate() override;

};

#endif //SIMULATOR9492YN_DIVIDE_H



#ifndef SIMULATOR9492YN_BINARYEXPRESSION_H
#define SIMULATOR9492YN_BINARYEXPRESSION_H

#include <list>
#include <string>

#include "Expression.h"

using namespace std;

// BinaryExpression is abstract
class BinaryExpression : public Expression{
private:

    Expression* ex1;
    Expression* ex2;

public:

    // constructor
    BinaryExpression(Expression* exp1, Expression* exp2);

    // getters
    Expression* getExpression1() const;
    Expression* getExpression2() const;

    /*
     * out put - a double
     * operation - returns the value of left expression modified
     * by the right expression
     */
    virtual double calculate()=0;


};

#endif //SIMULATOR9492YN_BINARYEXPRESSION_H

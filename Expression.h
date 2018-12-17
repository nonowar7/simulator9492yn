
#ifndef SIMULATOR9492YN_EXPRESSION_H
#define SIMULATOR9492YN_EXPRESSION_H

#include <list>
#include <string>
using namespace std;

// Expression is abstract
// everything will be an expression.
// for new - we have : Num as independant derived class
//                     BinaryExpression - everything else.

class Expression {

public:

    /*
     * output - a double
     * operation - returns the value of left expression modified
     * by the right expression
     */
    virtual double calculate()=0;

};


#endif //SIMULATOR9492YN_EXPRESSION_H

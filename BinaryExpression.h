#ifndef SIMULATOR9492YN_BINARYEXPRESSION_H
#define SIMULATOR9492YN_BINARYEXPRESSION_H

#include "Expression.h"

// BinaryExpression is abstract class
class BinaryExpression : public Expression{
private:
    Expression* leftExp;
    Expression* rightExp;
public:
    // constructor
    BinaryExpression(Expression* left, Expression* right){
        this->leftExp = left;
        this->rightExp = right;
    }
    // getters
    Expression* getLeftExp() const{
        return this->leftExp;
    }
    Expression* getRightExp() const{
        return this->rightExp;
    }

    /*
     * out put - a double
     * operation - returns the value of left expression modified
     * by the right expression
     */
    virtual double calculate()=0;
};

#endif //SIMULATOR9492YN_BINARYEXPRESSION_H
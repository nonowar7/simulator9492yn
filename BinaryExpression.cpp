

#include "BinaryExpression.h"
#include <list>
#include <string>

using namespace std;

BinaryExpression::BinaryExpression(Expression *exp1, Expression *exp2) {
    this->ex1 = exp1;
    this->ex2 = exp2;
}

Expression* BinaryExpression::getExpression1() const {
    return this->ex1;
}

Expression* BinaryExpression::getExpression2() const {
    return this->ex2;
}


#include "Minus.h"

#include <list>
#include <string>


using namespace std;

Minus::Minus(Expression* exp1, Expression* exp2): BinaryExpression(exp1,exp2){}

double Minus::calculate() {
    return this->getExpression1()->calculate() - this->getExpression2()->calculate();
}
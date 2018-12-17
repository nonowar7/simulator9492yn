

#include "Divide.h"


#include <list>
#include <string>

using namespace std;


Divide::Divide(Expression* exp1, Expression* exp2): BinaryExpression(exp1,exp2){}

double Divide::calculate() {
    if (this->getExpression2()->calculate() == 0) {
        throw "cannot divide by 0";
    }
    return this->getExpression1()->calculate() / this->getExpression2()->calculate();
}
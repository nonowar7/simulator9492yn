

#ifndef SIMULATOR9492YN_NUM_H
#define SIMULATOR9492YN_NUM_H

#include <list>
#include <string>

#include "Expression.h"

using namespace std;

class Num : public Expression {
private:
    double number;

public:

    Num(double number);
    double calculate() override;

};

#endif //SIMULATOR9492YN_NUM_H

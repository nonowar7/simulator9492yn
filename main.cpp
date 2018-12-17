
#include <iostream>

#include "Expression.h"
#include "Divide.h"
#include "Minus.h"
#include "Num.h"

#include <list>
#include <string>

using namespace std;

// just a general main to see this works...

int main() {

    try {
        Expression* exp1 = new Minus(new Num(27), new Divide(new Num(5), new Num(2)));
        double answer = exp1->calculate();
        cout << "result is: " << answer << endl;

    } catch (...) {
        cout << "illegal mathematical expression" << endl;
    }

    return 0;
}
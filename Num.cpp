//
// Created by noam on 12/17/18.
//

#include "Num.h"

#include <list>
#include <string>

using namespace std;


Num::Num(double number) {
    this->number = number;
}

double Num::calculate() {
    return this->number;
}
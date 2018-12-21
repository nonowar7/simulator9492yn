

#ifndef SIMULATOR9492YN_MASTER_EXPRESSIONSQUEUE_H
#define SIMULATOR9492YN_MASTER_EXPRESSIONSQUEUE_H

#include <queue>
#include "Expression.h"

using namespace std;

class ExpressionsQueue {

private:
    queue<Expression*> expressions;

public:

    // static instance of this class for external approach
    static ExpressionsQueue* getInstance() {
        static ExpressionsQueue* instance;
        if (instance == NULL) {
            instance = new ExpressionsQueue();
        }
        return instance;
    }

    queue<Expression*> getExpressions() const {
        return this->expressions;
    }

    void popExpression() {
        this->expressions.pop();
    }
};


#endif //SIMULATOR9492YN_MASTER_EXPRESSIONSQUEUE_H

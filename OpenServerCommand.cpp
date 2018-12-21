
#include "ExpressionsQueue.h"
#include "OpenServerCommand.h"

using namespace std;

void OpenServerCommand::execute() {

    ExpressionsQueue* expressionsQueue = ExpressionsQueue::getInstance();

    // popping the expression command (first element in queue)
    expressionsQueue->popExpression();

    // getting the first element for openServerCommand ( was second in queue, now first)
    int port = (int)expressionsQueue->getExpressions().front()->calculate();

    // popping the element
    expressionsQueue->popExpression();

    // getting the second element for openServerCommand ( was third in queue, now first)
    int Hz = (int)expressionsQueue->getExpressions().front()->calculate();

    // poppoing the element to get queue ready for next operation
    expressionsQueue->popExpression();


    // implementation of OpenServerCommand...
}
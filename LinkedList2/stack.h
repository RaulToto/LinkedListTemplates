#ifndef STACK_H
#define STACK_H
#include "list.h"
template <typename STACK>
class Stack:private List<STACK>
{
public:
    void push(const STACK &data)
    {
        insertFirst(data);
    }
    bool pop(STACK &data)
    {

    }
    //comprueba si la pila esta vacia
    bool isStackEmpty() const
    {
       return this->isEmpty();
    }
    //print stack
    void printStack() const
    {
       this->print();
    }
};
#endif // STACK_H

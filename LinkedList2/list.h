#ifndef LIST_H
#define LIST_H
#include "listnode.h"
template <typename NODE>
class List
{
public:
    //constrcutor
    List():firstPtr(nullptr),lastPtr(nullptr){}
    //destructor
    ~List()
    {
        if(!isEmpty())
        {
            std::cout << "destruyendo nodos" << std::endl;
        }
        ListNode<NODE> *curPtr=firstPtr;
        ListNode<NODE> *temPtr;
        while (curPtr!=nullptr) {
            temPtr=curPtr;
            std::cout << temPtr->data << '\n';
            curPtr = curPtr->nextPtr;
            delete temPtr;
        }
    }
    //function print list
    void print() const
    {
       if ( isEmpty() )
       {
          std::cout << "The list is empty\n\n";
          return;
       }
       ListNode< NODE > *curPtr = firstPtr;

       std::cout << "The list is: ";

       while ( curPtr != nullptr )
       {
          std::cout << curPtr->data << ' ';
          curPtr = curPtr->nextPtr;
       }

       std::cout << "\n\n";
    }

    //insert first Node
    void insertFirst(const NODE &val)
    {
        ListNode<NODE> *newPtr=getNewNode(val);
        if(isEmpty())
            firstPtr=lastPtr=newPtr;
        else{
            newPtr->nextPtr=firstPtr;
            firstPtr=newPtr;
        }
    }
    //insert back Node
    void insertBack(const NODE &val)
    {
        ListNode<NODE> *newPtr=getNewNode(val);
        if (isEmpty()) {
            firstPtr=lastPtr=newPtr;
        }
        else {
            lastPtr->nextPtr=newPtr;
            lastPtr=newPtr;
        }

    }

    //comprueba si esta vacio
    bool isEmpty()const
    {
        return firstPtr==nullptr;
    }

private:
    ListNode<NODE> *firstPtr;
    ListNode<NODE> *lastPtr;
    ListNode<NODE> *getNewNode(const NODE &val)
    {
        return new ListNode<NODE>(val);
    }


};
#endif // LIST_H

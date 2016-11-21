#include <iostream>
#include "list.h"
#include "listnode.h"
#include <string>
using namespace std;
template <typename T>
void testList( List< T > &listObject, const string &typeName )
{
    T value;
    cout << "imput value for insert" << endl;
    cin>> value;
    listObject.insertFirst(value);
    listObject.insertBack(value);
    listObject.print();
}

int main()
{
    List<int> integerList;
    testList(integerList,"integer");
}

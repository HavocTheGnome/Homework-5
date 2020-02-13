#include <iostream>
#include <string>
#include "LinkedList.hpp"

int main()
{
    LinkedList* ll = new LinkedList();
    ll->addFront(1);
    ll->addEnd(5);
    ll->display();
    ll->getEnd();
    ll->removeEnd();
    ll->display();
}
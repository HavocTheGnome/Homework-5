#ifndef LinkedList_hpp
#define LinkedList_hpp
#include "Node.hpp"

class LinkedList
{
private:
    
    int count;
    Node* head;

public:
    LinkedList();
    void addFront(int payload);
    int getFront();
    int removeFront();
    //hw 3 methods below
    void addEnd(int payload);
    int getEnd();
    int removeEnd();
    void display();

};
#endif /* LinkedList_hpp */
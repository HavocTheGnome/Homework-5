#include "LinkedList.hpp"
#include <iostream>

LinkedList::LinkedList()
{
    this->count = 0;
}
void LinkedList::addFront(int payload)
{
    Node* n = new Node(payload);

    if(!this->head)
    {
        this->head = n;
    }
    else
    {
        n->setNextNode(this->head);
        this->head = n;
    }
    this->count++;
}

void LinkedList::display()
{
    Node* currNode = this->head;
    for(int i = 0; i < this->count; i++)
    {
        std::cout<<currNode->getPayload() << "\n";
        currNode = currNode->getNextNode();
    }
}
int LinkedList::removeFront()
{
    Node* nodeToReturn = this->head;
    this->head = this->head->getNextNode();
    int val = nodeToReturn->getPayload();
    delete nodeToReturn;
    this->count--;
    return val;
}
int LinkedList::getFront()
{
    return this->head->getPayload();
}
void LinkedList::addEnd(int payload)
{
    Node* replacementNode = new Node(0);
    Node* nodeToReturn = this->head;
    if(!this->head)
    {
        this->addFront(payload);
    }
    else
    {
        for(int i = 0; i <= count; i++)
        {
            nodeToReturn = this->head;
            nodeToReturn->setNextNode(replacementNode);
            replacementNode = nodeToReturn;
            this->head = this->head->getNextNode();
        }
        Node* n = new Node(payload);
        n->setNextNode(replacementNode);
        replacementNode = n;
        this->count++;
        for(int i = 0; i <= count; i++)
        {
            nodeToReturn = replacementNode;
            nodeToReturn->setNextNode(head);
            this->head = nodeToReturn;
            replacementNode = replacementNode->getNextNode();
        }
    delete nodeToReturn;
    delete replacementNode; 
    }
    
}
int LinkedList::removeEnd()
{
    Node* replacementNode;
    Node* nodeToReturn = this->head;
    if(!this->head)
    {
        this->head = this->head;
    }
    else
    {
        for(int i = 0; i < count; i++)
        {
            nodeToReturn = this->head;
            nodeToReturn->setNextNode(replacementNode);
            replacementNode = nodeToReturn;
            head = this->head->getNextNode();
        }
        int val = replacementNode->getPayload();
        replacementNode = replacementNode->getNextNode();
        this->count--;
        for(int i = 0; i <= count; i++)
        {
            nodeToReturn = replacementNode;
            nodeToReturn->setNextNode(head);
            this->head = nodeToReturn;
            replacementNode = replacementNode->getNextNode();
        }
        return val;
    }
    
    delete nodeToReturn;
    delete replacementNode;
    
}
int LinkedList::getEnd()
{
    Node* replacementNode = new Node(0);
    Node* nodeToReturn = this->head;
    for(int i = 0; i < count; i++)
    {
        nodeToReturn = this->head;
        nodeToReturn->setNextNode(replacementNode);
        replacementNode = nodeToReturn;
        head = this->head->getNextNode();
    }
    return replacementNode->getPayload();
}
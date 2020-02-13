#include "LinkedList.hpp"
#include <iostream>

LinkedList::LinkedList()
{
    this->count = 0;
}
LinkedList::addFront(int payload)
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
    Node* replacementNode;
    Node* nodeToReturn = this->head;
    for(int i = 0; i <= count; i++)
    {
        nodeToReturn = this->head;
        nodeToReturn->setnextNode(replacementNode);
        replacementNode = nodeToReturn;
        this->head = this->head->getNextNode();
    }
    Node* n = new Node(payload);
    n->setNextNode(this->replacementNode);
    replacementNode = n;
    this->count++;
    for(int i = 0; i <= count; i++)
    {
        nodeToReturn = replacementNode;
        nodeToReturn->setnextNode(head);
        this->head = nodeToReturn;
        replacementNode = ReplacementNode->getNextNode();
    }
    delete nodeToReturn;
    delete replacementNode;
}
int LinkedList::removeEnd()
{
    Node* replacementNode;
    Node* nodeToReturn = this->head;
    for(int i = 0; i < count; i++)
    {
        nodeToReturn = this->head;
        nodeToReturn->setnextNode(replacementNode);
        replacementNode = this->nodeToReturn;
        head = this->head->getNextNode();
    }
    int val = replacementNode->getPayload();
    replacementNode = replacementNode->getNextNode();
    this->count--;
    for(int i = 0; i <= count; i++)
    {
        nodeToReturn = this->replacementNode;
        nodeToReturn->setnextNode(head);
        this->head = nodeToReturn;
        replacementNode = this->ReplacementNode->getNextNode();
    }
    delete nodeToReturn;
    delete replacementNode;
    return val;
}
int LinkedList::getEnd()
{
    Node* replacementNode;
    Node* nodeToReturn = this->head;
    for(int i = 0; i < count; i++)
    {
        nodeToReturn = this->head;
        nodeToReturn->setnextNode(replacementNode);
        replacementNode = this->nodeToReturn;
        head = this->head->getNextNode();
    }
    return replacementNode->getPayload();
}
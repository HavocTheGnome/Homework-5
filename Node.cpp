#include "Node.hpp"

Node::Node(int payload)
{
    this->payload = payload;
}
int Node::getPayload()
{
    return this->payload;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}

Node* Node::setNextNode(Node* n)
{
    this->nextNode = n;
}
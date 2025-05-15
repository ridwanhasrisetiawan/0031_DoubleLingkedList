#include <iostream>
#include <string>
using namespace std;

class Node 
{
    public:
    int nomMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
    private:
    Node *START;

    public:
    DoubleLinkedList()
    {
        START = NULL;
    }
}
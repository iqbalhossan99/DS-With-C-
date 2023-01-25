#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node * next;
};

class LinkedList{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    Node * CreateNewNode(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;

    }

    void InsertAtHead(int data)
    {
        Node *newNode = CreateNewNode(data);
        newNode->next = head;
        head = newNode;
    }

    void Traverse()
    {
        Node *a = head;

        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
    }
};



int main()
{
    LinkedList l;
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(10);
    l.Traverse();
    return 0;
}

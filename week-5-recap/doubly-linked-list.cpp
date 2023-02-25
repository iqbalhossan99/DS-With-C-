#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node * next;
    Node * prev;

};

class DoublyLinkedList{
public:
    Node *head;
    DoublyLinkedList(){
        head = NULL;
    }

    Node * CreateNewNode(int data)
    {
        Node * newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    void InsertAtHead(int data)
    {
        Node *newNode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newNode;
            return;
        }

        newNode -> next = head;
        head->prev = newNode;
        head = newNode;
    }

    void Traverse()
    {
        Node *a = head;

        while( a != NULL)
        {
            cout<< a->data<<" ";
            a = a->next;
        }
    }

};

int main()
{
    DoublyLinkedList dl;

    dl.InsertAtHead(20);
    dl.InsertAtHead(10);
    dl.InsertAtHead(30);
    dl.InsertAtHead(40);
    dl.Traverse();

    return 0;
}

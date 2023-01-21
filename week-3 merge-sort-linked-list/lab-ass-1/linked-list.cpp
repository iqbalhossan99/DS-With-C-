#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node * next;
};

class LinkedList
{
public:
    node * head;
    int sz = 0;
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }

    // Create a new node with data = value and next = null
    node * CreateNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
    }

    // Insert new value at Head (beginning of the linked-list)
    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);

        if( head == NULL)
        {
            head = a;
            return;
        }

        // If head isn't null
        a->next = head;
        head = a;
    }

    // Get Size
    int getSize()
    {
        return sz;
    }

    // Get value
    int getValue(int index)
    {
        if (index >= sz)
        {
            return -1;
        }
        node* temp = head;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }
        return temp->data;
    }

    // Reverse Print
    void ReversePrint2(node *a)
    {
        if(a == NULL)
        {
            return;
        }
        ReversePrint2(a->next);
        cout<<a->data<<" ";
    }
    void printReverse()
    {
        ReversePrint2(head);
        cout<<"\n";
    }

    // Traverse the linked-list
    void Traverse()
    {
        node* a = head;
        while( a != NULL)
        {
            cout<<a-> data<<" ";
            a = a->next;
        }
        cout<<"\n";
    }
    // Swap First
    void swapFirst()
    {
        if (sz < 2)
        {
            return;
        }
        node* first = head;
        node* second = head->next;
        first->next = second->next;
        second->next = first;
        head = second;
    }

};

int main()
{
    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}

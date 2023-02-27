#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node * next;
    Node * prev;

};

class LinkedList
{
public:
    Node* head;
    Node* tail;
    int sz;
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    Node * CreateNewNode(int data)
    {
        Node * newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    // insertHead O(1)
    void insertHead(int data)
    {
        Node *newNode = CreateNewNode(data);

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }

        Node* a = head;
        newNode -> next = a ;
        a->prev = newNode;
        head = newNode;

        sz++;
    }

    // insertTail O(1)
    void insertTail(int value)
    {
        Node* newNode = CreateNewNode(value);

        if(tail == NULL)
        {
            tail = newNode;
            head = newNode;
            sz++;
            return;
        }

        Node* t = tail;
        newNode->prev = t;
        t->next = newNode;
        tail = newNode;
        sz++;
    }

    //addInMid() will add a node to the middle of the list
    void insertMid(int data)
    {
        //Create a new node
        Node *newNode = CreateNewNode(data);

        //If list is empty
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            head->prev = NULL;
            tail->next = NULL;
            return;
        }
        //current will point to head
        Node *current = head, *temp = NULL;

        //Store the mid position of the list
        int mid = (sz % 2 == 0) ? (sz/2) : ((sz+1)/2);


        //Iterate through list till current points to mid position
        for(int i = 1; i <mid; i++)
        {
            current = current->next;
        }
        temp = current->next;
        temp->prev = current;

        //newNode will be added between current and temp
        current->next = newNode;
        newNode->prev = current;
        newNode->next = temp;
        temp->prev = newNode;
        sz++;
//                cout<<head->data<<" ";

    }

    void print()
    {
        Node *a = head;

        if(head == NULL)
        {
            printf("List is empty\n");
            return;
        }

        while( a != NULL)
        {
            cout<< a->data<<" ";
            a = a->next;
        }
    }

    int getSize()
    {
       return sz;
    }

    void Merge(LinkedList b)
    {
        //Merge a at the back of this linked-list
        //Write your code

              tail->next = b.head;

              sz = sz + b.getSize();

    }


};

int main()
{
    LinkedList a;
    LinkedList b;
    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
    a.print(); // prints  0 1 3 5 10
    cout<<"\n\n";
    a.getSize();
    cout<<"\n\n";
    b.insertHead(10);
    b.insertTail(50);
    b.insertMid(30);
    b.insertHead(9);
    b.insertTail(100);
    b.print(); // prints  9 10 30 50 100
      cout<<"\n\n";
    a.Merge(b);
    cout<<"\n\n";
    a.print(); // prints  0 1 3 5 10 9 10 30 50 100
        cout<<"\n\n";
    b.print(); // prints  9 10 30 50 100


return 0;
}

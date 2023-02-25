#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node * next;
    Node * prev;

};

class DoublyLinkedList
{
public:
    Node* head;
    Node* tail;
    int sz;
    DoublyLinkedList()
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
        newNode -> next = a;
        a->prev = newNode;
        head = newNode;

        sz++;
    }

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
        newNode ->next = t;
        t->prev = newNode;
        tail = newNode;
        sz++;
    }

    //addInMid() will add a node to the middle of the list
    void addInMid(int data)
    {
        //Create a new node
        Node *newNode = CreateNewNode(data);

        //If list is empty
        if(head == NULL)
        {
            head = newNode;
            head->prev = NULL;
            tail->next = NULL;
//            return;
        }
        else
        {
            //current will point to head
            Node *current = head, *temp = NULL;


            //Store the mid position of the list
            int mid = (sz % 2 == 0) ? (sz/2) : ((sz+1)/2);


            //Iterate through list till current points to mid position
            for(int i = 1; i < mid; i++)
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


        }
    }

    void Traverse()
    {
        Node *a = head;
        Node *t = tail;

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

//        while( t != NULL)
//        {
//            cout<< t->data<<" ";
//            t = t->next;
//        }
    }

    void getSize()
    {
        cout<<"\n"<<"size: "<<sz;
    }

};

int main()
{
    DoublyLinkedList dl;

    dl.insertHead(20);
    dl.insertHead(10);
    dl.insertHead(30);
    dl.insertHead(40);
    dl.insertTail(22);
    dl.insertTail(33);
    dl.insertTail(44);
    dl.insertTail(55);
    dl.Traverse();
    dl.addInMid(5);
    dl.addInMid(15);
    dl.Traverse();
    dl.getSize();

    return 0;
}

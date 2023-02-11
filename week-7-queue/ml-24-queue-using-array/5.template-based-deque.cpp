#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* prev;
    node* nxt;

};

class Deque
{
public:
    node * head;
    node * tail;
    int sz;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node* CreateNode(int value)
    {
        node* newnode = new node;
        newnode -> data = value;
        newnode ->prev = NULL;
        newnode ->nxt = NULL;

        return newnode;
    }

    // push_back O(1)
    void push_back(int value)
    {
        node *newnode = CreateNode(value);
        if(sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }

        tail->nxt = newnode;
        newnode -> prev = tail;
        tail = newnode;
        sz++;
    }

    // push_front O(1)
    void push_front(int value)
    {
        node *newnode = CreateNode(value);
        if(sz ==0 )
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }

        head ->prev = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;

    }

    // pop_back o(1)
    void pop_back()
    {
        if(sz ==0)
        {
            cout<<"Deque is empty\n";
            return;
        }
        if(sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        node *a = tail;
        tail = tail ->prev;
        delete a;
        tail -> nxt = NULL;
        sz--;
    }

    //pop_front O(1)
    void pop_front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return;
        }
        if(sz==1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        node *a = head;
        head = head->nxt;
        delete a;
        head -> prev = NULL;
        sz--;
    }

    //fron O(1)
    int front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }

        return head->data;
    }

    //back O(1)
    int back()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }

        return tail->data;
    }

};
int main()
{
    Deque d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);

    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.push_front(20);
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_front();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_back();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    return 0;
}


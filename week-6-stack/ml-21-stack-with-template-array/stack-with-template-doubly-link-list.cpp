
#include<bits/stdc++.h>

using namespace std;


template <class T>
class node
{
public:
    T data;
    node * nxt;
    node * prv;
};

template <class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node<T> * CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }


    // Delete At Head
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }

        node<T> *a = head;
        node<T> *b = head->nxt;

        delete a;

        if(b != NULL)
        {
            b->prv = NULL;
        }
        head = b;
    }

    //Prints the linked list O(n)
    void Traverse()
    {
        node<T> *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    // Returns the size of linked list O(1)
    T getSize()
    {
        return sz;
    }

};

// Stack using doubly linked list
template <class T>
class Stack
{
public:
    DoublyLinkedList<T>  dl;
    Stack()
    {

    }

    T top()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    void push(T val)
    {
        dl.InsertAtHead(val);
    }

    void pop()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!\n";
            return;
        }

        dl.DeleteAtHead();

    }
};


int main()
{

    Stack<int>a;
    a.push(4);
    a.push(6);
    a.push(3);
    a.push(7);

    cout<<a.top()<<"\n";


    Stack <char> st2;

    st2.push('a');
    cout<<st2.top()<<"\n";
    st2.push('b');
    cout<<st2.top()<<"\n";
    st2.push('c');
    cout<<st2.top()<<"\n";
    st2.push('d');

    cout<<st2.top()<<"\n";
    cout<<"\n";
    st2.pop();
    cout<<"->"<<st2.top()<<"\n";
    st2.pop();
    cout<<"->"<<st2.top()<<"\n";
    st2.pop();
    cout<<"->"<<st2.top()<<"\n";
    st2.pop();
    cout<<"->"<<st2.top()<<"\n";
    st2.pop();
    cout<<"->"<<st2.top()<<"\n";
    st2.pop();
    cout<<"->"<<st2.top()<<"\n";


    return 0;
}

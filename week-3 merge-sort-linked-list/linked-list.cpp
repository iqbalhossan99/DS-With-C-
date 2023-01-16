#include<bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node * next;
//
};

class LinkedList{
public:
    node * head;

    LinkedList()
    {
        head = NULL;
    }

    // Create a new node with data = value and next = null
    node * CreateNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
    }

    // Insert new value at Head
    void InsertAtHeat(int value)
    {
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

    int SearchDistinctValue(int value)
    {
        node *a = head;
        int index = 0;
        while( a != NULL)
        {
            if(a->data == value)
                return index;

            a = a->next;
            index++;
        }
        return -1;
    }
    void SearchAllValue(int value)
    {
        node *a = head;
        int index = 0;
        while( a != NULL)
        {
            if(a->data == value)
                cout<<value<<" is found at index "<<index<<"\n";

            a = a->next;
            index++;
        }
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHeat(10);
    l.InsertAtHeat(30);
    l.InsertAtHeat(20);
    l.InsertAtHeat(30);
    l.InsertAtHeat(20);
    l.InsertAtHeat(30);
    l.Traverse();
    cout<<"10 is found at "<< l.SearchDistinctValue(10)<<"\n";
    l.SearchAllValue(30);
    return 0;
}

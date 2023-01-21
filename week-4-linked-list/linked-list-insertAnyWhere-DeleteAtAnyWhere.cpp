#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node * next;
//
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

    // Insert new value at Head (beginning of the linked-list). time complexity o(1)
    void InsertAtHeat(int value)
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

    // Traverse the linked-list
    void Traverse()
    {
        node* a = head;
        while( a != NULL)
        {
            cout<<a-> data<<", ";
            a = a->next;
        }
        cout<<"\n";
    }

    // Search a single index of a value
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

    // Search all possible index
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

    // Get Size
    int getSize()
    {

        // o(1)
        return sz;

        //  It will be work o(size of linked-list) = o(n). So we don't use this method to get size. We run this o(1)
//        int sz = 0;
//        node *a = head;
//
//        while( a != NULL)
//        {
//            sz++;
//            a = a ->next;
//        }

//        return sz;
    }

    // Insert a value any where of the linked-list
    void InsertAtAnyIndex(int index, int value)
    {
        if(index<0 || index>sz)
        {
            return;
        }
        if(index == 0)
        {
            InsertAtHeat(value);
            return;
        }
        sz++;
        node *a = head;
        int current_index = 0;
        while(current_index != index-1)
        {
            a = a->next;
            current_index++;
        }
        node *newnode = CreateNewNode(value); // Create a new node for the new value
        newnode->next = a->next; // put the next of current index to the new node next
        a->next = newnode; // put the new node's value to the next of a.
    }

    // Delete at head
    void DeleteAtHeat()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        node *a = head;
        head = a->next;

        delete a;
    }

    // Delete a value from any where of the linked-list
    void DeleteAtAnyIndex(int index)
    {
        if(index<0 || index>sz)
        {
            return;
        }
        if(index == 0)
        {
            DeleteAtHeat();
            return;
        }

        sz--;
        node * a = head;
        int current_index = 0;

        while(current_index != index-1)
        {
            a = a->next;
            current_index++;
        }
        node *b = a->next;
        a->next = b->next;

        delete b;
    }

    // Insert after a value
    void InsertAfterValue(int value, int data)
    {
        node * a = head;
        while(a != NULL)
        {
            if(a->data == value)
            {
                break;
            }
            a = a->next;
        }

        if(a == NULL)
        {
            cout<<value<<" Doesn't exist in linked-list.\n";
            return;
        }
        sz++;
        node *newnode = CreateNewNode(data);
        newnode->next = a->next;
        a->next = newnode;
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
    void ReversePrint()
    {
        ReversePrint2(head);
        cout<<"\n";
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHeat(70);
    l.InsertAtHeat(60);
    l.InsertAtHeat(50);
    l.InsertAtHeat(40);
    l.InsertAtHeat(30);
    l.InsertAtHeat(20);
    l.InsertAtHeat(10);
    l.Traverse();
//    cout<<"10 is found at "<< l.SearchDistinctValue(10)<<"\n";
//    l.SearchAllValue(30);
    cout<<"Size of linked-list: "<<l.getSize()<<"\n";
    l.InsertAtAnyIndex(5,100);
    l.Traverse();
    cout<<"Size of linked-list: "<<l.getSize()<<"\n";
    l.DeleteAtHeat();
    l.Traverse();
    cout<<"Size of linked-list: "<<l.getSize()<<"\n";
    l.DeleteAtAnyIndex(3);
    l.Traverse();
    cout<<"Size of linked-list: "<<l.getSize()<<"\n";
    l.InsertAfterValue(20, 100);
    l.Traverse();
    l.ReversePrint();

    return 0;
}

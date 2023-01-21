#include<bits/stdc++.h>

using namespace std;
class LinkedList {
    struct Node {
        int data;
        Node* next;
    };
    Node* head;
    int size;

public:
    LinkedList() {
        head = nullptr;
        size = 0;
    }

    void InsertAtHead(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = head;
        head = temp;
        size++;
    }

    int getSize() {
        return size;
    }

    int getValue(int index) {
        if (index >= size) {
            return -1;
        }
        Node* temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }
        return temp->data;
    }

    void printReverse(Node* p) {
        if (p == nullptr) {
            return;
        }
        printReverse(p->next);
        cout << p->data << " ";
    }

    void printReverse() {
        printReverse(head);
    }

    void swapFirst() {
        if (size < 2) {
            return;
        }
        Node* first = head;
        Node* second = head->next;
        first->next = second->next;
        second->next = first;
        head = second;
    }

    void Traverse() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
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
    cout<<"\n";
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    l.Traverse()



}


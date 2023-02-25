#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;

class Queue
{
public:
    int arr[MAX_SIZE];
    int l, r;

    Queue()
    {
        l = 0;
        r = -1;
    }

    void enqueue(int value)
    {
        if(r+1>= MAX_SIZE)
        {
            cout<<"Array is full!";
        }
        r++;
        arr[r] = value;
    }

    void deQueue()
    {
        if(l>r)
        {
            cout<<"Queue is empty!";
        }
        l++;
    }


    int Size()
    {
        return r-l+1;
    }

    void Front()
    {
        if(l>r)
        {
            cout<<"Queue is empty!";
        }

        cout<< arr[l]<<"\n";


    }

};
int main()
{
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.Front();
    q.deQueue();
    q.Front();
    q.deQueue();
    q.Front();
    q.deQueue();
    q.Front();
    cout<<"\n";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int>nodes;

    MaxHeap()
    {

    }

    //O(n)
    void UpHeapify(int idx)
    {
        while(idx>0 && nodes[idx] > nodes[(idx-1)/2])
        {
            swap(nodes[idx], nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }

    // Insert O(logn)
    void Insert(int value)
    {
        nodes.push_back(value);
        UpHeapify(nodes.size()-1);
    }

    // Down Heapify O(logn)
    void DownHeapify(int idx)
    {
                    while(1)
                    {
                                    int largest = idx;
                                    int l = 2*idx + 1;
                                    int r = 2*idx + 2;
                                    if(l<nodes.size() && nodes[largest] < nodes[l])
                                                largest = l;
                                    if(r<nodes.size() && nodes[largest] < nodes[r])
                                                largest = r;
                                    if(largest == idx)
                                                return;

                                    swap(nodes[idx], nodes[largest]);
                                    idx = largest;

                    }
    }

    //Delete
    void Delete(int idx)
    {
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        DownHeapify(idx);
    }

    void PrintHeap()
    {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
    }
};


int main()
{
    MaxHeap heap;
    heap.Insert(4);
    heap.Insert(7);
    heap.Insert(9);
    heap.Insert(1);
    heap.Insert(10);
    heap.Insert(20);
    heap.Insert(30);
    heap.PrintHeap();
    heap.Delete(0);
    cout<<"\n";
    heap.PrintHeap();
    return 0;
}

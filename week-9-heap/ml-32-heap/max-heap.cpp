#include<bits/stdc++.h>
using namespace std;

class MaxHeap
{

public:
    vector<int>nodes;

    Heap()
    {

    }

    void up_heapify(int idx)
    {
        while(idx > 0 && nodes[idx] > nodes[(idx-1)/2])
        {
            swap(nodes[idx], nodes[(idx-1)/2]);
                 idx = (idx-1)/2;
        }
    }

    void Insert(int value)
    {
        nodes.push_back(value);
        up_heapify(nodes.size()-1);
    }

    void Print_Heap(){
                for(int i = 0; i<nodes.size(); i++)
                {
                                cout<<nodes[i]<<" ";
                }
                cout<<"\n";
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
                heap.Print_Heap();
    return 0;
}

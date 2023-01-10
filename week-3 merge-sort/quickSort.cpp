#include<bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int>&a)
{

//     for(int i=0; i<a.size(); i++)
//    {
//        cout<<a[i]<<" ";
//    }

    if(a.size() <= 1)
        return a;

    int pivot = a.size() - 1;

    vector<int>b;
    vector<int>c;
    for(int i=0; i<a.size(); i++ )
    {
        if(i==pivot)
            continue;

        if(a[i] <= a[pivot])
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }

    vector<int>sorted_b = quick_sort(b);
    vector<int>sorted_c = quick_sort(c);
    vector<int>sorted_a;
    for(int i=0; i<sorted_b.size(); i++)
        sorted_a.push_back(sorted_b[i]);

    sorted_a.push_back(a[pivot]);

    for(int i=0; i<sorted_b.size(); i++)
        sorted_a.push_back(sorted_c[i]);

    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    return sorted_a;
}

int main()
{
    vector<int>a = {5,2,3,5,4,1};
    vector<int>sorted_a = quick_sort(a);
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n";


    return 0;
}

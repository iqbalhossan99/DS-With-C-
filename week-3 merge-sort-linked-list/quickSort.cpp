#include<bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int>&arr)
{

//     for(int i=0; i<arr.size(); i++)
//    {
//        cout<<arr[i]<<" ";
//    }

    cout<<"\n";
    if(arr.size() <= 1)
        return arr;

    int pivot = arr.size() - 1;

    cout<<pivot<<"Pivot"<<"\n";

    vector<int>b;
    vector<int>c;

    for(int i=0; i<arr.size(); i++ )
    {
        if(i==pivot)
            continue;

        if(arr[i] <= arr[pivot])
        {
            b.push_back(arr[i]);
        }
        else
        {
            c.push_back(arr[i]);
        }
    }

    vector<int>sorted_b = quick_sort(b);
    vector<int>sorted_c = quick_sort(c);
    vector<int>sorted_a;
    for(int i=0; i<sorted_b.size(); i++)
        sorted_a.push_back(sorted_b[i]);

    sorted_a.push_back(arr[pivot]);

    for(int i=0; i<sorted_b.size(); i++)
        sorted_a.push_back(sorted_c[i]);

    for(int i=0; i<b.size(); i++)
    {
        cout<<b[i]<<" ";
    }

    return sorted_a;
}

int main()
{
    vector<int>arr = {5,2,3,5,4,1};
    vector<int>sorted_a = quick_sort(arr);

    cout<<"main arr";
    for(int i=0; i<arr.size(); i++)
    {
//        cout<<arr[i]<<" ";
    }

    cout<<"\n";

    return 0;
}

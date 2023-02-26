#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    deque<int>q_arr;
    deque<int>q_arr2;

    for(int i=0; i<n; i++)
    {
        q_arr.push_back(arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(q_arr.front() > q_arr.back())
        {
            q_arr.push_back(q_arr.front());
        }
//        else
//        {
//            q_arr2.push_front(q_arr1.front());
//        }
    }
////q_arr.push_back(10);
////q_arr.push_back(15);
////q_arr.push_back(30);
//q_arr.push_back();

    cout<<q_arr.front()<<"\n";
    cout<<q_arr.back()<<"\n";
    cout<<q_arr.back()<<"\n";
    cout<<q_arr.back()<<"\n";
    cout<<q_arr.front()<<"\n";
    cout<<q_arr.front()<<"\n";

//                for(int i=0;i<n;i++)
//               {
//                               cout<<arr[i];
//               }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ar[n];
    for(int i=0; i<n; i++)cin>>ar[i];
    map<int,string> a;
    stack<int> x;
    for(int i=0; i<n; i++)
    {
        a[i]=ar[i];
    }
    for(auto it:a)
    {
        for(auto et:a)
        {
            if(it.second == et.second && it.first>et.first)
            {
                x.push(et.first);

            }
        }
        cout<<"Idx: "<<it.first<<"value"<<it.second<<"\n";
        if(!x.empty())
        {
            cout<<x.top()<<"\n";
//            while(!x.empty())
//            {
                x.pop();
//            }
        }
        else
        {
            cout<<-1<<"\n";
        }
    }
    return 0;
}


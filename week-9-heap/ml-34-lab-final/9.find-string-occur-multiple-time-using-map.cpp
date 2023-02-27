#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    vector<string>arr;
    map<int, string>ms;
    stack<int> x;

//    for(int i=0; i<n; i++)
//    {
//        cin>>s;
//        arr.push_back(s);
//    }

    for(int i=0; i<n; i++)
    {
        cin>>s;
        ms[i] = s;
    }


    for(auto it:ms)
    {
        for(auto et:ms)
        {
            if(it.second == et.second && it.first>et.first)
            {
                x.push(et.first);

            }
        }

        if(!x.empty())
        {
            cout<<x.top()<<"\n";
            x.pop();
        }
        else
        {
            cout<<-1<<"\n";
        }
    }

    return 0;
}

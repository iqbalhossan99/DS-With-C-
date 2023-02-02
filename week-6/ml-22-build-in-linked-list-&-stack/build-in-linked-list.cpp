#include<bits/stdc++.h>
using namespace std;

void print(list<int>dl)
{
    //  o(n)
    //    list<int>::iterator a = dl.begin();
    auto a = dl.begin();
    while(a != dl.end())
    {
        cout<<*a <<" ";
        a++;
    }
}

int main()
{
    list<int> l;
    // push_front o(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
   // print(l);

    //push_back() o(1)
    l.push_back(40);
    l.push_back(50);
    //print(l);

    // pop_back() o(1)
    l.pop_back();
    //print(l);

    // pop_front() o(1)
    l.pop_front();
    print(l);

     return 0;
}

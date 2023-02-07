#include<bits/stdc++.h>
using namespace std;

void print(list<int>&dl)
{
    //  o(n)
    list<int>::iterator a = dl.begin();

    while( a != dl.end())
    {
        cout << *a <<" ";
        a++;
    }
}

void InsertAtAnyWhere(list<int>&dl, int index, int value)
{
    auto it = dl.begin(); //o(1)
    advance(it, index); // it will move one index right of the item o(index)
    dl.insert(it, value); //O(1)
}

void DeleteAtAnyWhere(list<int>&dl, int index)
{
    auto it = dl.begin();
    advance(it, index);
    dl.erase(it);

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
    //l.pop_back();
    //print(l);

    // pop_front() o(1)
   // l.pop_front();
    //print(l);

    //insert at any where
    InsertAtAnyWhere(l, 3, 100);
    print(l);

    cout<<"\n";

    //Delete at any where
    DeleteAtAnyWhere(l, 2);
    print(l);
    cout<<"\n";
    // size
    cout<<l.size();


     return 0;
}

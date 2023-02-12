#include<bits/stdc++.h>
using namespace std;

void print_list(list<int>dl)
{
    auto a = dl.begin();
    while(a != dl.end())
    {
        cout<<*a <<" ";
        a++;
    }

    cout<<" \n";
}

void deleteValue(list<int> & l, int value)
{
    auto a = l.begin();
    advance(a, value);
    l.erase(a);

//    int delete_item, idx=0;
//
//    while(a != l.end())
//    {
//          if(*a == value)
//          {
//                    delete_item = *a;
//          }
////        cout<<*a <<" ";
//          idx += 1;
//        a++;
//    }
//
//    cout<<delete_item<<" "<<idx<<"\n";


}

int main()
{
    list<int> lt;

    lt.push_back(7);
    lt.push_back(3);
    lt.push_back(8);
    lt.push_back(4);
    lt.push_back(5);
    lt.push_back(4);

    print_list(lt);



    deleteValue(lt, 4);

    print_list(lt);

    return 0;
}

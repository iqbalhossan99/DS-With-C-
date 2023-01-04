#include<bits/stdc++.h>
using namespace std;

class Array
{
private:

    int *arr;
    int cap;
    int sz;

    void Increase_size()
    {
        cap = cap *2;

        int *temp = new int[cap];

        for(int i=0; i<sz; i++)
        {
            temp[i] = arr[i];
        }

        delete arr;

        arr = temp;

    }

public:

    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;
    }
    // o(1)
    void Push_back(int x)
    {
        if(cap==sz)
        {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }
    // o(sz-pos) o(sz)
    void Insert_Arr(int pos, int x)
    {
        if(cap==sz){
            Increase_size();
        }
//        Here need to move array element by one position from end
//        so that our position's value value doesn't delete
        for(int i=sz-1; i>=pos;i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos] = x;
        sz++;
    }
    // o(sz)
    void Print()
    {
        for(int i=0; i<sz; i++)
        {
            cout << arr[i] << " ";
        }

        cout<<"\n";
    }
    // O(1)
    int getSize()
    {
        return sz;
    }
    // o(1)
    int getElement(int idx)
    {
        if(idx>=sz)
        {
            cout<<"Error "<<idx<<"is out of bound!\n";
            return -1;
        }
        return arr[idx];
    }
    // o(1)
    void Pop_back()
    {
        if(sz==0)
        {
            cout<<"Array size is 0\n";
            return;
        }
        sz--;
    }
    // o(1)
    void Erase(int pos)
    {
        if(pos>=sz)
        {
            cout<<"Position doesn't exist in this array.\n";
            return;
        }
        for(int i = pos+1; i<sz; i++)
        {
            arr[i-1] = arr[i];
        }
        sz--;
    }

};
int main()
{
    Array a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(50);
    a.Insert_Arr(1, 5);
    a.Print();

    cout<<a.getSize()<<"\n";
    cout<<a.getElement(3)<<"\n";
    a.Print();
    a.Pop_back();
    a.Print();
    a.Erase(1);
    a.Print();
    return 0;
}

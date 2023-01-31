
#include<bits/stdc++.h>
using namespace std;

//Template base Stack using dynamic array
template <class T>
class Stack{
public:
    T *a;
    int stack_size;
    int array_cap;

    Stack()
    {
        a = new T[1];
        array_cap = 1;
        stack_size = 0;
    }

    // Makes the array cap multiplied by 2;
    void increase_size()
    {
        T *tmp;
        tmp = new T[array_cap*2];
        for(int i=0; i<array_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(a,tmp);
        delete tmp;
        array_cap = array_cap*2;
    }

      // Add an element in the stack. o(1)
    void push(T value)
    {
        if(stack_size+1 > array_cap)
        {
            increase_size();
        }
        stack_size = stack_size + 1; // It will be total array size
        a[stack_size - 1] = value; // It will insert in index number
    }

    // Delete the top most element form the stack. o(1);
    void pop()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
//        a[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }

    // Return the top element from the stack. O(1)
    T top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
//            assert(false); // to crash the program
        }
        return a[stack_size - 1];
    }

};
int main()
{
       Stack <double> st;
    st.push(3.3);
    cout<<st.top()<<"\n";
    st.push(4.4);
    cout<<st.top()<<"\n";
    st.push(5.5);
    cout<<st.top()<<"\n";
    st.push(6.6);

    cout<<st.top()<<"\n";
    cout<<"\n";
    st.pop();
    cout<<"->"<<st.top()<<"\n";
    st.pop();
    cout<<"->"<<st.top()<<"\n";
    st.pop();
    cout<<"->"<<st.top()<<"\n";
    st.pop();
    cout<<"->"<<st.top()<<"\n";
    st.pop();
    cout<<"->"<<st.top()<<"\n";
    st.pop();
    cout<<"->"<<st.top()<<"\n";

    Stack <char> st2;

     st2.push('a');
    cout<<st2.top()<<"\n";
    st2.push('b');
    cout<<st2.top()<<"\n";
    st2.push('c');
    cout<<st2.top()<<"\n";
    st2.push('d');

    cout<<st2.top()<<"\n";
    cout<<"\n";
    st2.pop();
    cout<<"->"<<st2.top()<<"\n";
    st2.pop();
    cout<<"->"<<st2.top()<<"\n";
    st2.pop();
    cout<<"->"<<st2.top()<<"\n";
    st2.pop();
    cout<<"->"<<st2.top()<<"\n";
    st2.pop();
    cout<<"->"<<st2.top()<<"\n";
    st2.pop();
    cout<<"->"<<st2.top()<<"\n";


    return 0;
}

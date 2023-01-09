#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(builtin_popcount(i) == 2)
        {
            for(int j=1; j<=n; j++)
                cout<<i<<j<<endl;
        }
    }

    return 0;
}


/*

time complexity for outer for loop: this loop will run n time. so time complexity for this loop is  o(n)

time complexity for inner loop for loop: If condition is true then  This loop will run also n time so o(n)

So Total time complexity is o(n*n) = o(n^2)


Wahida Akhter
The first for loop runs n times, and the second for loop also runs  n times.
Therefore, the time complexity of the  inner for loop is O(n). since the outer for loop        also runs n times, the time complexity entire code segment is O(n*n) =O(n^2)
This is because  the time complexity of the inner for loop does not depend on the value of i . but rather on the value of n. The time complexity of the outer for loop is O(n) because it runs for n iterations.THerefore,  the overall time complexity of the code segment is O(n)*O(n) =O(n^2)
3 er answer


*/

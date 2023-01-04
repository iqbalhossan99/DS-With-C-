#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n , k;

   cin>>n>>k;

   vector <int> arr(n);

   for(int i=0; i<n; i++)
   {
       cin>>arr[i];
   }

   int low = 0, high = n-1;
   bool flag = 0;
   while(low<=high)
   {
       int mid = (low+high)/2;
       if(arr[mid] == k)
       {
           cout<<arr[mid]<<" YES\n";
           flag = 1;
           break;
       }
       if(arr[mid]>k)
       {
           high = mid -1;
       }
       else{
        low = mid + 1;
       }
   }

   if(flag ==0)
        cout<<"NO\n";
    return 0;
}

/*

n
sorted array

7 9
1 3 5 6 8 9 10


*/

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n , k;

   cin>>n;

   vector <int> arr(n);
   for(int i=0; i<n; i++)
   {
       cin>>arr[i];
   }

   cin>>k;

   int low = 0, high = n-1;
   int occurseCount = 0;
   while(low<=high)
   {
       int mid = (low+high)/2;
       if(arr[mid] == k)
       {
           occurseCount++;
       }

       if(arr[mid]>k)
       {
           high = mid -1;
       }
       else{
        low = mid + 1;
       }
   }

   if(occurseCount >1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}


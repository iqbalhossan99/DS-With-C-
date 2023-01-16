#include <bits/stdc++.h>
using namespace std;

// Function to get the missing number
int getMissingNum(int a[], int n)
{
	// Given the range of elements
	// are 1 more than the size of array
	int N = n + 1;

	int total = (N) * (N + 1) / 2;
	for (int i = 0; i < n; i++)
		total -= a[i];
	return total;
}

// Driver Code
int main()
{
    int n;
//	int arr[] = { 1, 2, 4, 5 };
cin>>n;
	int arr[n];
	for(int i=0; i<n-1; i++)
        cin>>arr[i];
    for(int i=0; i<n-1; i++)
        cout<<arr[i];

	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int miss = getMissingNum(arr, N);
	cout << miss;
	return 0;
}

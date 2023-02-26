// C++ program to sort
// arrays of strings using merge sort
#include <bits/stdc++.h>
using namespace std;

// Function to compare 2 words
bool isAlphabeticallySmaller(string str1, string str2)
{
    transform(str1.begin(), str1.end(), str1.begin(),
              ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(),
              ::toupper);
    if (str1 < str2)
    {
        return true;
    }
    return false;
}

vector<string> merge(vector<string> Arr1,vector<string> Arr2)
{
    int m = Arr1.size();
    int n = Arr2.size();
    vector<string> Arr3;

    int idx = 0;

    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (isAlphabeticallySmaller(Arr1[i], Arr2[j]))
        {
            Arr3.push_back(Arr1[i]);
            i++;
            idx++;
        }
        else
        {
            Arr3.push_back(Arr2[j]);
            j++;
            idx++;
        }
    }
    while (i < m)
    {
        Arr3.push_back(Arr1[i]);
        i++;
        idx++;
    }
    while (j < n)
    {
        Arr3.push_back(Arr2[j]);
        j++;
        idx++;
    }
    return Arr3;
}

// Function to mergeSort 2 arrays
vector<string> mergeSort(vector<string> Arr, int l, int sz)
{
    if (l == sz)
    {
        vector<string> A = { Arr[l] };
        return A;
    }
    int mid = l + (sz - l) / 2;
    vector<string> arr1 = mergeSort(Arr, l, mid);
    vector<string> arr2 = mergeSort(Arr, mid + 1, sz);

    vector<string> arr3 = merge(arr1, arr2);
    return arr3;
}

// Driver code
int main()
{
    int N;
    string s;
    cin>>N;
    vector<string> Arr;

    for(int i=0; i<N; i++)
    {
                    cin>>s;
                   Arr.push_back(s);
    }
    vector<string> a = mergeSort(Arr, 0, N - 1);
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << "\n";
    }
    return 0;
}


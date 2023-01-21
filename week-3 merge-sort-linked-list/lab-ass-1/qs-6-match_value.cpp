#include <bits/stdc++.h>
using namespace std;

bool exists_more(vector<int>& v, int k) {
    int left = 0, right = v.size() - 1;
    int left_index, right_index;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (v[mid] == k) {
            left_index = mid;
            right = mid - 1;
        }
        else if (v[mid] < k) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    left = 0, right = v.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (v[mid] == k) {
            right_index = mid;
            left = mid + 1;
        }
        else if (v[mid] < k) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return (right_index - left_index) > 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    bool is_Match = exists_more(arr, k);
    if (is_Match) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
    return 0;
}

/*

7
1 3 4 6 6 9 17
6
7 6
1 3 4 6 6 9 17
6

10
1 2 3 4 5 6 7 8 9 10
5

*/

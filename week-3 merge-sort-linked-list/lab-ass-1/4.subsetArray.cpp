
#include <bits/stdc++.h>

using namespace std;

bool isSubset(int arr_one[], int arr_two[], int m, int n) {
    sort(arr_one, arr_one + m);
    sort(arr_two, arr_two + n);
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr_one[i] < arr_two[j]) {
            return false;
        }
        if (arr_one[i] == arr_two[j]) {
            i++;
        }
        j++;
    }
    if (i < m) {
        return false;
    }
    return true;
}

int main() {
    int m, n;
    cin >> m;
    int arr_one[m];
    for (int i = 0; i < m; i++) {
        cin >> arr_one[i];
    }
    cin >> n;
    int arr_two[n];
    for (int i = 0; i < n; i++) {
        cin >> arr_two[i];
    }
    if (isSubset(arr_one, arr_two, m, n)) {
        cout << "YES" <<"\n";
    }
    else {
        cout << "NO" <<"\n";
    }
    return 0;
}

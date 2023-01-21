#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int a, b;
    cin >> a >> b;
    int i = a - 1;
    int j = b;
    while (j < n) {
        arr[i] = arr[j];
        i++;
        j++;
    }

    for (i = 0; i < n - (b - a + 1); i++) {
        cout << arr[i] << " ";
    }
    cout <<"\n";
    return 0;
}

/*
6
1 4 6 2 8 7
2 4
*/

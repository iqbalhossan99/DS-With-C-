#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum_of_numbers = (n * (n+1)) / 2;
    int k;
    for (int i = 0; i < n-1; i++) {
        cin >> k;
        sum_of_numbers -= k;
    }
    cout << sum_of_numbers << endl;
    return 0;
}

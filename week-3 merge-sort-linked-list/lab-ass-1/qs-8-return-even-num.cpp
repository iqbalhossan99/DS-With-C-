#include<bits/stdc++.h>

using namespace std;

vector<int> even_generator(vector<int> v) {
    vector<int> even_numbers;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            even_numbers.push_back(v[i]);
        }
    }
    return even_numbers;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> even_numbers = even_generator(numbers);
    for (int i = 0; i < even_numbers.size(); i++) {
        cout << even_numbers[i] << " ";
    }
    return 0;
}

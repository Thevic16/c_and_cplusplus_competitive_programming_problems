#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1760/A

int main() {
    int t;
    cin >> t;

    while (t--){
        vector<int> numbers;
        for (int i = 0; i < 3; ++i) {
            int x;
            cin >> x;
            numbers.push_back(x);
        }

        sort(numbers.begin(), numbers.end());
        cout << numbers[1] << endl;
    }
    return 0;
}

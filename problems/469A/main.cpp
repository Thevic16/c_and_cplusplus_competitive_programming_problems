#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/problemset/problem/469/A

int main() {
    int n;

    cin >> n;

    set<int> myset;

    int p;
    cin >> p;
    for (int i = 0; i < p; ++i) {
        int x;
        cin >> x;
        myset.insert(x);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int x;
        cin >> x;
        myset.insert(x);
    }

    if(myset.size() == n){
        cout << "I become the guy." << endl;
    }
    else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

// https://codeforces.com/problemset/problem/1551/A

using namespace std;

typedef long long ll;


int main() {
    int t;

    cin >> t;

    while (t--){
        ll n;
        cin >> n;

        ll c1 = n/3;
        ll c2 = n/3;
        bool two = true;

        while (c1 + c2*2 != n){
            if(two and c1 + c2*2 + 2 <= n){
                c2 = c2 + 1;
                two = false;
            }
            else {
                c1 = c1 + 1;
                two = true;
            }
        }

        cout << c1 << " " << c2 << endl;
    }

    return 0;
}

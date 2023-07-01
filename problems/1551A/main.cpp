#include <bits/stdc++.h>

// https://codeforces.com/problemset/problem/1551/A

using namespace std;

typedef long long ll;

pair<ll, ll> solution(ll c1, ll c2, ll n, bool two = true) {
    if(c1 + c2*2 == n){
        pair<ll, ll> coins = pair<ll, ll>(c1,c2);
        return coins;
    }
    else if(two and c1 + c2*2 + 2 <= n){
        solution(c1, c2+1, n, false);
    }
    else {
        solution(c1+1, c2, n, true);
    }
}

int main() {
    int t;

    cin >> t;

    while (t--){
        ll n;
        cin >> n;

        pair<ll, ll> coins = solution(n/3, n/3, n);
        cout << coins.first << " " << coins.second << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1472/B

map<pair<int, int>, bool> dp;


bool solution(vector<int> v, int n, int i = 0, int acc = 0) {
    pair<int, int> key;
    key.first = i;
    key.second = acc;

    if(dp.find(key) != dp.end()){
        //cout << "i:" << key.first << " acc:" << acc << endl;
        return dp[key];
    }
    if(i >= n){
        if(acc == 0){
            return true;
        }
        else {
            return false;
        }
    }
    else {
        dp[key] = solution(v, n, i+1, acc + v[i]) || solution(v, n, i+1, acc - v[i]);
        return dp[key];
    }
}

string bool_to_string(bool result){
    if(result){
        return "YES";
    }
    else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--){
        int n;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        cout << bool_to_string(solution(v, n)) << endl;
        dp.clear();
    }

    return 0;
}

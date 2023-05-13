#include <bits/stdc++.h>

// https://codeforces.com/contest/1800/problem/E1

// https://codeforces.com/contest/1800/submission/200038482

using namespace std;

map<pair<string, int>, bool> memo;


string swap(const string a, int i, int j, int n) {
    if(j >= n){
        return a;
    }
    else {
        string b = a;
        char temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        return b;
    }
}

bool solution(string s, string t, int n, int k, int T,  int i = 0) {
    if(memo.find(pair(s, i)) != memo.end()){
        return memo[pair(s, i)];
    }
    else if(i > n && T == 0){
        return false;
    }
    else if(i > n){
        return solution(s, t, n, k, T-1, 0);
    }
    else if(s == t){
        return true;
    }
    else {
        bool result = solution(s, t, n, k, T,  i +1) ||
                        solution(swap(s, i, i + k, n), t, n, k, T, i +1) ||
                        solution(swap(s, i, i + k + 1, n), t, n, k, T, i +1);

        memo[pair(s, i)] = result;
        return result;
    }
}

int main() {
    int T;
    cin >> T;

    while(T--){
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s;
        cin >> t;
        bool result = solution(s, t, n, k,  n);

        if(result){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

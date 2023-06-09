#include <bits/stdc++.h>
using namespace std;

// https://cses.fi/problemset/task/1637

int dp [1000001] = {0};

int solution(int n, string n_str) {
    if(dp[n] != 0){
        return dp[n];
    }
    else if(n == 0){
        return 0;
    }
    else if(n < 0){
        return INT32_MAX;
    }
    else {
        int acc = INT32_MAX;

        for (char d: n_str) {
            if(d == '0'){
                continue;
            }
            int new_n = n - (d - '0');
            acc = min(acc, solution(new_n, to_string(new_n)) + 1);
        }

        dp[n] = acc;

        return dp[n];
    }
}

int main() {
    int n;
    cin >> n;
    cout << solution(n, to_string(n)) << endl;

    return 0;
}

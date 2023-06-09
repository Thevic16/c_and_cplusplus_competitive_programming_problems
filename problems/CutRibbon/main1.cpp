#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/problemset/problem/189/A

map<int, int> dp;

int max(int x, int y) {
    if(x > y)
        return x;
    else
        return y;
}


int solution(int n, int a, int b, int c) {

    if(dp.find(n) != dp.end()){
        return dp[n];
    }
    else if(n == 0){
        return 0;
    }
    else if(n < 0){
        return INT16_MIN;
    }
    else {
        dp[n] = max(max(solution(n - a, a, b, c) + 1, solution(n - b, a, b, c) + 1),
                      solution(n - c, a, b, c) + 1);

        return dp[n];
    }

}

int main() {
    int n, a, b , c;
    cin >> n >> a >> b >> c;

    vector<int> acc;

    cout << solution(n , a , b ,c) << endl;
    return 0;
}

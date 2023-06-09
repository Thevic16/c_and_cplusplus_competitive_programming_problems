#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/problemset/problem/189/A

map<pair<int, int>, int> dp;


int solution(int n, int a, int b, int c, int cont = 0, int size = 0) {
    pair<int, int> key;
    key.first = cont;
    key.second = size;

    if(dp.find(key) != dp.end()){
        return dp[key];
    }
    else if(cont == n){
        dp[key] = size;
        return dp[key];
    }
    else if(cont > n){
        dp[key] = -1;
        return dp[key];
    }
    else {
        dp[key] = max(max(solution(n, a, b, c, cont+a, size+1), solution(n, a, b, c, cont+b, size+1)),
                       solution(n, a, b, c, cont+c, size+1));

        return dp[key];
    }

}

int main() {
    int n, a, b , c;
    cin >> n >> a >> b >> c;

    vector<int> acc;

    cout << solution(n , a , b ,c) << endl;
    return 0;
}

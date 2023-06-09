#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/996/A

map<long long int, long long int> dp;

long long int solution(long long int n){
    if(dp.find(n) != dp.end()){
        return dp[n];
    }
    else if(n == 0){
        return 0;
    }
    else if(n <= 0){
        return INT16_MAX;
    }
    else {
        dp[n] = min(min(min(min(solution(n-1)+1,
                                solution(n-5)+1), solution(n-10)+1), solution(n-20)+1), solution(n-100)+1);
        return dp[n];
    }
}

int main() {
    long long int n;
    cin >> n;

    //cout << n;

    cout << n/100 + solution(n % 100) << endl;

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/contest/1800/problem/D

/*
test case 1
1
5
ababa

0 - aba
1 - aba
2 - aba


test case 2
1
6
aaabcc

0 - abcc
1 - abcc
2 - aacc
3 - aaac
4 - aaab

4

 */

map<string, int> memo;

int solution(string s, int n) {
    int cont = 0;

    for (int i = 0; i < n-1; ++i) {
        string sCopy;
        sCopy = s;
        string substring = sCopy.erase(i, 2);

        if(memo.find(substring) == memo.end()){
            cont += 1;
        }

        memo[substring] = 1;
    }

    return cont;
}

int main() {
    int t;
    cin >> t;

    while (t--){
        string s;
        int n;
        memo.clear();
        cin >> n >> s;
        cout << solution(s, n) << endl;
    }

    return 0;
}

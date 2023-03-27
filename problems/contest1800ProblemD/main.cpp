#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/contest/1800/problem/D

/*
 * Un algoritmo recursivo que la condicion de parada sea cuando el size del string sea n - 2.
 *
 * Tenemos dos optiones remover la letra o no removerla y seguir adelante.
 *
 * Creo que eso puede ser un DP.
 * */

/*
1
5
ababa

0 - aba
1 - aba
2 - aba
 */

map<string, int> memo;

int solution(string s, int n, int i = 0) {
    if(memo.find(s) != memo.end()){
        return 0;
    }
    else if(s.size() == n-2){
        memo[s] = 1;
        return 1;
    }
    else if(i+2 > n){
        return 0;
    }
    else {
        string sCopy;
        sCopy = s;
        string substring = sCopy.erase(i, 2);
        return solution(s, n, i+1) + solution(substring, n, i+1);
    }
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

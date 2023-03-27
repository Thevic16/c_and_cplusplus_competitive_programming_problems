#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1800/problem/A
char cat[] = {'0', 'm', 'e', 'o', 'w'};

string solution(string s, int n,  int i = 0, int j = 1) {
    if(j > 5){
        return "YES";
    }
    if(i > n){
        return "NO";
    }
    else if(s[i] == cat[j]){
        return solution(s, n, i + 1, j +1);
    }
    else if(s[i] == cat[j-1]){
        return solution(s, n, i + 1, j);
    }
    else if (cat[j] == '0'){
        return solution(s, n, i + 1, j);
    }
    else {
        return "NO";
    }
}

int main() {
    int n, t;
    string s;
    cin >> t;


    while (t--) {
        cin >> n;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << solution(s, n) << endl;
    }

    return 0;
}

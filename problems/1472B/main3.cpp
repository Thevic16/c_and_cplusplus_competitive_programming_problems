#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1472/B


string solution(vector<int> v) {
    int amount_one = 0;
    int amount_two = 0;
    for (int i = 0; i < v.size(); ++i) {
        if(v[i] == 2){
            amount_two += 1;
        }
        else if(v[i] == 1){
            amount_one += 1;
        }
    }
    // Evaluando cuando amount 1s o 2s es menor que cero
    if(amount_one == 0 and amount_two % 2 == 0){
        return "YES";
    }
    else if(amount_one == 0 and amount_two % 2 != 0){
        return "NO";
    }
    else if(amount_one % 2 == 0 and amount_two == 0){
        return "YES";
    }
    else if(amount_one % 2 != 0 and amount_two == 0){
        return "NO";
    }

    // Evaluando cuando amount 1s y 2s son mayor que cero
    if(amount_one % 2 == 0 and amount_two % 2 == 0){
        return "YES";
    }
    else if(amount_one % 2 != 0 and amount_two % 2 != 0){
        return "NO";
    }
    else if(amount_one % 2 == 0 and amount_two % 2 != 0){
        return "YES";
    }
    else if(amount_one % 2 != 0 and amount_two % 2 == 0){
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
        cout << solution(v) << endl;
    }

    return 0;
}
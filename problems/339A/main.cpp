#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/problemset/problem/339/A

void printNumbers(vector<int> numbers, int n, int i) {
    if(i == n-1){
        cout << numbers[i];
    }
    else {
        cout << numbers[i] << "+";
        printNumbers(numbers, n, i+1);
    }
}

int main() {
    vector<int> numbers;
    string s;

    cin >> s;

    int i = 1;
    for(char c: s){
        if(i % 2 != 0){
            numbers.push_back(c - '0'); // convert char to int in c
        }
        i += 1;
    }

    sort(numbers.begin(), numbers.end());

    printNumbers(numbers, numbers.size(), 0);

    return 0;
}

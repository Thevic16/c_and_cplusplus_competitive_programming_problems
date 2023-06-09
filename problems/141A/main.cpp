#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/141/A


vector<char> fromStringToVector(string s) {
    vector<char> v;

    for(char c: s){
        v.push_back(c);
    }

    return v;
}

string verify(vector<char> namesVector, vector<char> lettersFoundVector, int n, int i = 0) {
    if(i >= n){
        return "YES";
    }
    else if(namesVector[i] != lettersFoundVector[i]){
        return "NO";
    }
    else {
        return verify(namesVector, lettersFoundVector, n, i + 1);
    }
}

int main() {
    string guestName, residenceName, lettersFound;

    cin >> guestName >> residenceName >> lettersFound;

    vector<char> namesVector = fromStringToVector(guestName + residenceName);
    vector<char> lettersFoundVector = fromStringToVector(lettersFound);

    sort(namesVector.begin(), namesVector.end());
    sort(lettersFoundVector.begin(), lettersFoundVector.end());

    if(namesVector.size() != lettersFoundVector.size()){
        cout << "NO";
    }
    else {
        cout << verify(namesVector, lettersFoundVector, namesVector.size());
    }

    return 0;
}

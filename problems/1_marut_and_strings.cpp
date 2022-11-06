//
// Created by victor on 26/05/22.
// References: https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/2/?sort_by=partially%20solved&p_level=
#include <iostream>
using namespace std;

int resolver(string s){
    int count_lower_case = 0, count_upper_case = 0;

    for (int i = 0; i < s.length(); ++i) {
        if(islower(static_cast<char>(s[i]))){
            count_lower_case++;
        }
        else if (isupper(static_cast<char>(s[i]))){
            count_upper_case++;
        }
    }

     if(count_lower_case == 0 and count_upper_case == 0) {
         return -1;
     }
     else{
         return min(count_lower_case, count_upper_case);
     }
}


int main() {
    int t;
    cin >> t;

    if (t < 1 or t > 10){
        cout << "Invalid Test" << endl;
        return 0;
    }

    while (t--){
        string s;
        cin >> s;
        int s_len = s.length();

        if (s_len < 1 or s_len > 100){
            cout << "Invalid Input" << endl;
            continue;
        }

        int result = resolver(s);

        if(result == -1){
            cout << "Invalid Input" << endl;
        }
        else{
            cout << result << endl;
        }

    }
}

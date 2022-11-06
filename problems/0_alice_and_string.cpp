//
// Created by victor on 26/05/22.
// References: https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/aliceandstrings-9da62aa7/
#include <iostream>
using namespace std;

string increment_letter(string a, int ind){
    a[ind] = static_cast<char>(a[ind]+1);
    return a;
}

bool cmp_equal(string a, string b){
    if(a == b){
        return true;
    }
    return false;
}

bool cmp_gr_eq_ind(string a, string b, int ind){
    if(static_cast<char>(a[ind]) >= static_cast<char>(b[ind]) ){
        return true;
    }
    return false;
}

// verify if prefix is possible.
bool verify_prefix_increase(string a, string b){
    if(static_cast<char>(a[0]) < static_cast<char>(b[0]) ){
        return true;
    }
    return false;
}

string prefix_increase(string a, string b){
    int ind = 0;
    int len_a = a.length();

    while(!cmp_gr_eq_ind(a,b,ind) and ind < len_a){
        a = increment_letter(a,ind);
        ind++;
    }

    return a;
}


string resolver(string a, string b){
    while (verify_prefix_increase(a,b)){
        a = prefix_increase(a,b);

        if(cmp_equal(a,b)){
            return "YES";
        }
    }

    return "NO";
}

int main() {
    string a, b;
    cin >> a >> b;    //Reading input from STDIN

    cout << resolver(a,b);
}

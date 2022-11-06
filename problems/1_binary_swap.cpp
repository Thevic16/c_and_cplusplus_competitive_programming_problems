//
// Created by victor on 26/05/22.
// References: https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/2/?sort_by=partially%20solved&p_level=
#include <iostream>
using namespace std;

void swap(string & b, int ind){
   if(b[ind] == '0'){
       b[ind] = '1';
   }
   else{
       b[ind] = '0';
   }
}

// verify if two binary number are different
bool is_different(string a, string b, int ind){
    if(a[ind] == b[ind]){
        return false;
    }

    return true;
}

// verify if it is necessary to make swap.
bool is_swap(string & a,string & b, int ind){

    if(is_different(a,b,ind) and is_different(a,b,ind+1)){
        return true;
    }
    return false;
}

int resolver(string & a,string & b){
    int count =0;

    for (int i = 0; i < a.length(); ++i) {
        if(is_swap(a,b,i)){
            swap(b,i);
            swap(b,i+1);
            count++;
        }
    }
    return count;
}


int main() {
    string a, b;
    cin >> a >> b;    //Reading input from STDIN

    int count = resolver(a,b);

    if(a == b){
        cout << count;
    }
    else{
        cout << -1;
    }

}

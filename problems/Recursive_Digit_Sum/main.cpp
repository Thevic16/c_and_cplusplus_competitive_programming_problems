#include <iostream>
using namespace std;


string getP (long long int n){
    string p;

    p +=to_string(n);

    return p;
}

string getSumDigitP(string p,bool FirstTime,int k){
    long long int sum =0;
    for (long long int i = 0; i < p.size(); i++) {
        int incre = p[i];
        sum = sum + incre - '0';
    }
    if(FirstTime){
        sum *=k;
    }

    return to_string(sum);
}

string superDigit(string p,int k){
    string superDigit = getSumDigitP(p,true,k);
    while(superDigit.size() !=1){
        superDigit = getSumDigitP(superDigit,false,k);
    }
    return superDigit;
}


int main() {
    long long int n;
    int k;
    cin >> n >> k;

    string p= getP(n);

    cout << superDigit(p,k);

    return 0;
}
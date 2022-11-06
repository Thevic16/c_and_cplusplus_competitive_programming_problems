#include <iostream>
#include <bits/stdc++.h>

using namespace std;


string equivalente_impares(string a, string b){
    string equi = "NO";

    if(a==b){
        equi = "YES";
    }

    return equi;
}


string equivalente(string s,int n){
    string s1 = s.substr(0,n/2);
    string s2 = s.substr(n/2,n/2);

    if(n==2){
        sort(s.begin(),s.end());
        return s;
    }

    return equivalente(s1,n/2) + equivalente(s2,n/2);
}


int main() {

    string a,b;
    cin >> a>>b;

    int n = a.length();


    if(n%2!=0){
       cout << equivalente_impares(a,b);
    }

    a =equivalente(a,a.length());
    b =equivalente(b,b.length());

    string a1 = a1.substr(0,n/2);
    string a2 = a2.substr(n/2,n/2);

    string b1 = b1.substr(0,n/2);
    string b2 = b2.substr(n/2,n/2);

     if (a1==b1 and a2==b2 and a1==b2 and a2==b1){
        cout << "YES";
    }
    else
        cout <<"NO";



    return 0;
}
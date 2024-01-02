#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/231/A

int main()
{
    int n;
    int cont = 0;
    cin >> n;

    while (n != 0){
        int a,b,c, sum;
        cin >> a >> b >> c;
        sum = a + b + c;

        if(sum >= 2){
            cont = cont + 1;
        }

        n = n - 1;
    }

    cout << cont;

    return 0;
}

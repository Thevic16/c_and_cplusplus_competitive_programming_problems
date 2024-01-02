#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/contest/228/problem/A

int count_shoes_types(long long int shoes[], int ind){
    int cont = 0;
    long long int type = shoes[ind];

    for (int i = 0; i < 4; ++i) {
        if(shoes[i] == type){
            cont += 1;
        }
    }

    return cont;
}

int main()
{
    long long int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    long long int shoes[] = {s1, s2, s3, s4};

    int count_shoes_one = count_shoes_types(shoes, 0);
    int count_shoes_two = count_shoes_types(shoes, 1);
    int count_shoes_three = count_shoes_types(shoes, 2);
    int count_shoes_four = count_shoes_types(shoes, 3);

    int sum_shoes_types = count_shoes_one + count_shoes_two + count_shoes_three + count_shoes_four;

    if(sum_shoes_types == 16){
        cout << 3;
    }
    else if(sum_shoes_types == 10){
        cout << 2;
    }
    else if(sum_shoes_types == 8){
        cout << 2;
    }
    else if(sum_shoes_types == 6){
        cout << 1;
    }
    else if(sum_shoes_types == 4){
        cout << 0;
    }
    else {
        cout << -1;
    }

    return 0;
}
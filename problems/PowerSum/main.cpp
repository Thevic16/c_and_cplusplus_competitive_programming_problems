#include <iostream>
#include <cmath>
#include <memory.h>

using namespace std;

int p[32];

//asegurar el tama;o de dp.
int dp[32+1];

int powerSum(int x,int idx){
    if(x==0){
        return 1;
    }
    if(x<0 or idx <0){
        return 0;
    }
    if(dp[idx]!=-1){
       return dp[idx];
    }
    dp[idx] = powerSum(x-p[idx],idx-1)+ powerSum(x,idx-1);
    return dp[idx];
}

int main() {
    int x;
    cin >> x;
    int n;
    cin >>n;

    for (int i = 0; i < 32; ++i) {
        p[i]= pow(i,n);
    }

    memset(dp, -1, sizeof(dp));
    cout << powerSum(x, sizeof(p)-1);
    return 0;
}
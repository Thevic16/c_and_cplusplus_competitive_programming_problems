#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;
long long int dp[251][51];

int count(int n,int m,int c[]){

    if(n==0){
        return 1;
    }
    if(n<0 || m<0 ){
        return 0;
    }
    if(dp[n][m] != -1){
        return dp[n][m];
    }

    dp[n][m] = count(n-c[m],m,c) + count(n,m-1,c);
    return dp[n][m];
}

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    int c[51];
    for (int i = 0; i <m ; ++i) {
        cin >>c[i];
    }
    memset(dp,-1,sizeof(dp));
    cout << count(n,m-1,c);

    return 0;
}
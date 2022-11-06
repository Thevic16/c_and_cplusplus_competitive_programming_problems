#include <iostream>
#include <cmath>

using namespace std;

int v(long long int m,int k){

    long long int r=m;
    long long int p=1;
    long int i=1;

    while (p!=0){

        p=(m/pow(k,i));
        r += p;
        i++;
    }

    return r;
}

int main() {
    long long int n;
    int k;

    cin >>n;
    cin >>k;

    long long int low=0;
    long int hight=n;
    long int mid =0;

    while(low<=hight){
        mid= low + (hight-low)/2;

        if(v(mid,k)<n){
            low =mid+1;
        }

        else
            hight=mid-1;
    }

    cout << low;

    return 0;
}
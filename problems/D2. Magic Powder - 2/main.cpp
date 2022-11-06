#include <bits/stdc++.h>

using namespace std;

int lower(vector <int>a, vector <int>b,int n,int k){

    float low =b[0]/a[0];
    int ind_low =0;

    float comp;

    for(int j=1;j<n;j++){
        comp = b[j]/a[j];

        if(comp <low){
            low=comp;
            ind_low=j;
        }
    }

    return b[ind_low]+k/a[ind_low];

}

int main (){
    int n;
    int k;
    cin >> n;
    cin >> k;

    vector <int> a;
    vector <int> b;

    for(int i=0;i<n;i++){

        int x; cin >> x;

        a.push_back(x);
    }

    for(int i=0;i<n;i++){

        int y; cin >> y;

        b.push_back(y);
    }

    //inicio del la sulucion del problema.

    int high =1>>30;
    int low=0;
    int mid=0;
    int comp = lower(a,b,n,k);
/*
    while(low<=high){
        mid = low +(high-low)/2;
        if(mid>=comp){
            high =mid -1;
        }
        else low =mid+1;
    }

    cout << low;
*/
    cout << comp;
    return 0;
}
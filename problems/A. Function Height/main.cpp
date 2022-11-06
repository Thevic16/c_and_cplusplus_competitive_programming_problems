#include <bits/stdc++.h>

using namespace std;
/*
int lower(vector <int>a, vector <int>b,int n){

    float low =b[0]/a[0];
    int ind_low =0;

    float comp;

    for(int k=1;k<n;k++){
        comp = b[k]/a[k];

        if(comp <low){
            low=comp;
            ind_low=k;
        }
    }

    return ind_low;

}
*/
bool check(vector <long long int> a,vector <long long int> b,long long int k,long long int x,int n){


    for(int i =0;i<n;i++){
        long long int need = a[i]*x;
        long long int falta = need-b[i];
        //cout <<need<<endl;
        if(falta>0){
            k= k - falta;

        }
        if(k<0LL){
            return false;
        }
    }

    return k>=0LL;
}

int main (){
    int n;
    long long int k;
    cin >> n;
    cin >> k;

    vector <long long int> a;
    vector <long long int> b;

    for(int i=0;i<n;i++){

        long long int x; cin >> x;

        a.push_back(x);
    }

    for(int i=0;i<n;i++){

        long long int y; cin >> y;

        b.push_back(y);
    }

    long long int low =1;
    long long int hight = 1LL<<32;
    long long int mid =0;

    while(low<=hight){
        mid = low + (hight-low)/2;

        if(check(a,b,k,mid,n)){
            low = mid +1;
            //cout <<"Si";
        }else hight = mid -1;

        //cout<<low<< "  --- "<<hight<<endl;
    }

    cout << low -1;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

bool sumaGuardias(long int mid,vector <long int> a,long long int n){

        long long int suma =0;

        for(long long















































        int i=0;i<n;i++){
            suma += mid - a[i];
        }

    return suma >= mid;
}

int main() {
    long long int n;
    long int cantGuard;
    cin >> n;
    vector <long int>a;

    for(int i=0;i<n;i++)
    {
        int x;  cin >> x;
        a.push_back(x);
    }

    sort(a.begin(),a.end());
    cantGuard = a[n-1];

    long int low =cantGuard;
    long int high =3e14;
    long int mid =0;

    while(low<=high){
        mid = low + (high-low)/2;
        if(sumaGuardias(mid,a,n)){
            high = mid -1;
        }
        else low = mid +1;
    }

    cout << low;

    return 0;
}




#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct fuel_stop{
    long int D;
    long int F;
};

bool CompareTwoFuel(fuel_stop a,fuel_stop b){

    if(a.F!=b.F){

        return a.F>b.F;
    }
    else return a.D<b.D;
}


void check(long int P,long int L,fuel_stop fs[],long int n){
    long int p = P;
    long int i=0;
    long int stops=0;

    while(p<L)
    {
       if(fs[i].D<=p) {
           p+=fs[i].F;
           fs[i].F=0;
           sort(fs,fs+n,CompareTwoFuel);
           i=0;
           stops++;
       }
       else i++;

       if(stops==n and p<L){
           cout<<-1<<endl;
           return;
       }

    }

    cout << stops <<endl;

    return;
}

int main() {

    long int t;
    cin >>t;

    while(t--) {
        long int n;
        vector<long int> d;
        vector<long int> f;
        long int L;
        long int P;

        cin >> n;
        for (long int i = 0; i < n; i++) {
            long int x;
            long int y;
            cin >> x;
            cin >> y;

            d.push_back(x);
            f.push_back(y);
        }

        cin >> L;
        cin >> P;

        fuel_stop fs[n];

        for (long int i = 0; i < n; i++) {
            fs[i].D = L - d[i];
            fs[i].F = f[i];
        }

        sort(fs, fs + n, CompareTwoFuel);
        check(P, L, fs, n);
    }

    return 0;
}
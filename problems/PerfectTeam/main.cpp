#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(ll c,ll m,ll x,ll nEquipos){
    if(c < nEquipos) return false;
    if(m < nEquipos) return false;

    return (c+m+x)/3 >= nEquipos;
}

int main(){

    ll casos;
    cin >> casos;
    ll i=0;

    while(casos--)
    {
        ll c,m,x;
        cin >> c>>m>>x;

        ll low =0;
        ll high = 1<<30;
        ll mid =0;

        while (low<=high){
            mid = (low + high)/2;

            if(check(c,m,x,mid))
                low = mid +1;

            else
                high = mid - 1;
        }

        cout << low-1 <<endl;
    }
    return 0;
}
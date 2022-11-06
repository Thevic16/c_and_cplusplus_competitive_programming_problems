#include <bits/stdc++.h>

using namespace std;
/*
 * 4

  7
  6 4
 2 5 10
9 8 12 2
 2 12 7
  8 2
  10
 */
int dp(vector<vector<int>>v,int i, int j, int n,int sum){

    if(i==7) {
        return sum;
    }
    if(j >= v[i].size()){
        return 0;
    }
    if(i >= v.size()){
        return 0;
    }

    return max(   dp(v,i,j+1,n,sum)  ,   dp(v,i+1,j,n,sum+v[i][j])   );

    //return max(   dp(v,i+1,j,n,sum+v[i][j])  ,   dp(v,i+1,j+1,n,sum+v[i][j])   );

    //return max(   dp(v,i,j+1,n,sum)  ,   dp(v,i+1,j,n,sum+v[i+1][j])   );
}

int main() {

    vector<vector<int>>v;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        vector<int>aux;

        for (int j = 0; j < i+1; ++j) {
            int x;
            cin >>x;
            aux.push_back(x);

        }
        v.push_back(aux);
    }

    for (int i = 0; i < n-1; ++i) {
        vector<int>aux;

        for (int j = 0; j < n-1-i; ++j) {
            int x;
            cin >>x;
            aux.push_back(x);
        }
        v.push_back(aux);
    }

   // int j[] = [n];
   // fill(j,j+n,0);
   // para agregar los ceros
/*
    for (int i = 0; i < v.size()-1; ++i) {
        for (int j = 0; j < v[i].size(); ++j) {
            v[i+1].insert(v[i+1].begin(),0);
        }
    }
*/
    //cout << dp(v,0,0,n, 0);


    //v[1].insert(v[1].begin(),0);


    for (int k = 0; k < v.size(); ++k) {
        for (int i = 0; i < v[k].size(); ++i) {
            cout << v[k][i]<<" ";
        }
        cout << endl;
    }


    return 0;
}
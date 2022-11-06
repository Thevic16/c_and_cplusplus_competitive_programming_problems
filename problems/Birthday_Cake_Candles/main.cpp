#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int Birthday_Cake_Candles(vector <int>v){

    int contador=0;

    vector <int> a = v;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());

    int i=-1;
    do{
        contador++;
        i++;
    }while (a[i]==a[i+1]);

    return contador;

}

int main() {
    int n;
    cin >> n;

    vector <int> v;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int cont = Birthday_Cake_Candles(v);

    cout << cont;

    return 0;
}
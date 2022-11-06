#include <iostream>


using namespace std;
int  resultados [100001];

int hijosdeunarbol(int n){

    if(n==1){
        return 2;
    }

    if(resultados[n]!=0){
        return resultados[n];
    }
    else{
        resultados[n]=(hijosdeunarbol(n-1)*2)%1000000007;
        return resultados[n];
    }
}

int main() {

    cout << hijosdeunarbol(100000);

    return 0;
}
#include <iostream>

using namespace std;
int main() {
    float al=0.23;
    float ae =0.3;
    float ac=0.6;
    float ar=0.06;
    float L;
    float ne;
    float nc;

    cout <<"Ingrese la logitud:"<<endl;
    cin >> L;
    cout <<"Ingrese el numero de empalme"<<endl;
    cin >> ne;
    cout <<"Ingrese el numero de conectores"<<endl;
    cin >> nc;

    cout <<"Resultado: "<<L*al+ne*ae+nc*ac+ar*L<<"db"<<endl;

    return 0;
}
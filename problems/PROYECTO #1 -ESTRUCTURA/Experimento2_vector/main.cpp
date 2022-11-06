#include <bits/stdc++.h>
#include <utilapiset.h>

using namespace std;
using namespace std::chrono;

struct container
{
    uint64_t key;   // 8 bytes       //8 bytes
    uint8_t dummy[1024]; // 0 bytes
};

container arreglo[1000000]; //arreglo

int main() {
    int n = 1000000; //TamaÃ±o del recolector.
    vector<long long int>time;// vector para almacenar los 5 tiempos de cada prueba.


    vector<container>mivector;


    for (int i = 0; i < n; ++i) {
        arreglo[i].key = i;
    }

    for (int l = 0; l < 5; ++l) {


        // Get starting timepoint
        auto start = high_resolution_clock::now();

        for (int j = 0; j < n; ++j) {
            mivector.push_back(arreglo[j]);
        }

        // Get ending timepoint
        auto stop = high_resolution_clock::now();


        // Get duration. Substart timepoints to
        // get durarion. To cast it to proper unit
        // use duration cast method
        auto duration = duration_cast<microseconds>(stop - start);



        time.push_back(duration.count()); //Asignando el tiempo correspodiente a la medida.
        mivector.clear();


    }
    /*
    //Imprimir el arreglo ordenado
    for (int k = 0; k < n; ++k) {
        cout <<mivector[k].key<<endl;
    }
    */

    //Imprimir los resultados de la prueba

    for (int k = 0; k < 5; ++k) {
        cout <<k<<"-"<<"Time taken by function: "<< time[k] <<" milisegundos" << endl;
    }


        while(1){
        Beep(523,500); // 523 hertz (C5) for 500 milliseconds
    }


    return 0;
}
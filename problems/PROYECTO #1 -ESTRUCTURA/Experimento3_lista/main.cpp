#include <bits/stdc++.h>
#include <utilapiset.h>

using namespace std;
using namespace std::chrono;

struct container
{
    uint64_t key;   // 8 bytes       //8 bytes
    uint8_t dummy[1016]; // 0 bytes
};

container arreglo[1000000]; //arreglo

int main() {
    int n = 10000;
    vector<long long int> time;// vector para almacenar los 5 tiempos de cada prueba.

    list<container> milista;

    for (int i = 0; i < n; ++i) {
        arreglo[i].key = i+1;
    }
    unsigned seed = 0;
    shuffle(arreglo, arreglo + n, default_random_engine(seed)); //Hacer que los elementos se deorganizen.


    for (int l = 0; l < 5; ++l) {

        // Get starting timepoint
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; ++i) {
                bool encontrado = false;
                auto it = milista.begin();

                 //for (auto it = milista.begin(); it != milista.end(); ++it){
                 while(!encontrado){

                    if (it == milista.end()) {
                        milista.push_back(arreglo[i]);
                        encontrado = true;
                    } else if (arreglo[i].key <= (*it).key) {
                        milista.insert(it, arreglo[i]);
                        encontrado = true;
                    }
                    if(encontrado){
                        break;
                    }
                    it++;
                }

        }

        // Get ending timepoint
        auto stop = high_resolution_clock::now();


        // Get duration. Substart timepoints to
        // get durarion. To cast it to proper unit
        // use duration cast method
        auto duration = duration_cast<microseconds>(stop - start);
        cout<<duration.count()<<endl;
        time.push_back(duration.count()); //Asignando el tiempo correspodiente a la medida.

        /*
        // using begin() to print list
        for (auto it = milista.begin(); it != milista.end(); ++it){
            cout << ' ' << (*it).key<<endl;

        }
        */

        milista.clear();
    }


    //Imprimir los resultados de la prueba
    for (int k = 0; k < 5; ++k) {
        cout <<k<<"-"<<"Time taken by function: "<< time[k] <<" milisegundos" << endl;
    }

    while(1){
        Beep(523,500); // 523 hertz (C5) for 500 milliseconds
    }

    return 0;

}
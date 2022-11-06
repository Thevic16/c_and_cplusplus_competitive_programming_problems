#include <bits/stdc++.h>
#include <utilapiset.h>

using namespace std;
using namespace std::chrono;


struct container
{
    uint64_t key;   // 8 bytes       //8 bytes
    uint8_t dummy[1016]; // 0 bytes
};


bool compareTwoElement(container a, container b)
{
    return a.key < b.key;
}

container arreglo[1000000]; //arreglo

int main() {
    vector<long long int> time;// vector para almacenar los 5 tiempos de cada prueba.



    int n = 500000;


    for (int i = 0; i < n; ++i) {
        arreglo[i].key = i + 1;
    }
    unsigned seed = 0;
    shuffle(arreglo, arreglo + n, default_random_engine(seed)); //Hacer que los elementos se deorganizen.


    for (int l = 0; l < 5; ++l) {

        vector<container> mivector;
        for (int i = 0; i < n; ++i) {
            mivector.push_back(arreglo[i]);
        }


        // Get starting timepoint
        auto start = high_resolution_clock::now();

        sort(mivector.begin(), mivector.end(), compareTwoElement);
        // Get ending timepoint
        auto stop = high_resolution_clock::now();
        /*
        for (int i = 0; i < n; ++i) {
            cout << mivector[i].key << endl;
        }
        */
        // Get duration. Substart timepoints to
        // get durarion. To cast it to proper unit
        // use duration cast method
        auto duration = duration_cast<microseconds>(stop - start);

        time.push_back(duration.count()); //Asignando el tiempo correspodiente a la medida.


        }

        //Imprimir los resultados de la prueba
        for (int k = 0; k < 5; ++k) {
            cout << k + 1 << "-" << "Time taken by function: " << time[k] << " milisegundos" << endl;
        }

        while (1) {
            Beep(523, 500); // 523 hertz (C5) for 500 milliseconds
        }

        return 0;

}
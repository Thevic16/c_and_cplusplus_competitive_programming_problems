#include <bits/stdc++.h>
#include <utilapiset.h>

using namespace std;
using namespace std::chrono;

int RandomsNum(int lower, int upper)
{
    int num = (rand() %(upper - lower + 1)) + lower;

    return num;
}

struct container
{
    uint64_t key;   // 8 bytes       //8 bytes
    uint8_t dummy[1016]; // 0 bytes
};

int main() {
    vector<long long int> time;// vector para almacenar los 5 tiempos de cada prueba.

    list<container> milista;

    int n = 10000;


    for (int l = 0; l < 5; ++l) {

        for (int i = 0; i < n; ++i) {
            container x;
            x.key = i;

            milista.push_back(x);
        }

        // Get starting timepoint
        auto start = high_resolution_clock::now();

        //for (auto it = milista.begin(); it != milista.end(); ++it){
        for (int j = 0; j < 1000; ++j) {
            int i=0;
            int randow = RandomsNum(0,milista.size()-1);
            auto it = milista.begin();
            while(i<randow){
                it++;
                i++;
            }
            milista.erase(it);
        }


        // Get ending timepoint
        auto stop = high_resolution_clock::now();


        // Get duration. Substart timepoints to
        // get durarion. To cast it to proper unit
        // use duration cast method
        auto duration = duration_cast<microseconds>(stop - start);

        time.push_back(duration.count()); //Asignando el tiempo correspodiente a la medida.

        //cout<<milista.size()<<endl;
        milista.clear();
    }


    //Imprimir los resultados de la prueba
    for (int k = 0; k < 5; ++k) {
        cout <<k+1<<"-"<<"Time taken by function: "<< time[k] <<" milisegundos" << endl;
    }


    while(1){
        Beep(523,500); // 523 hertz (C5) for 500 milliseconds
    }


    return 0;

}
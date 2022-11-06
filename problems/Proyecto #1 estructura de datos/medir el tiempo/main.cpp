
//paso 1
/*
#include <chrono>
using namespace std::chrono;

// Usa la palabra clave auto para evitar escribir mucho
// escribe definiciones para obtener el punto de tiempo
// en este instante utiliza la función now ()
auto start = high_resolution_clock::now();
*/

//paso 2
/*
#include <chrono>
using namespace std::chrono;

// Después de la llamada a la función
auto stop = high_resolution_clock::now();
*/

//Tercer paso.
/*
// Restar puntos de parada e inicio y
// lanzarlo a la unidad requerida. Unidades predefinidas
// son nanosegundos, microsegundos, milisegundos,
// segundos, minutos, horas. Usar la función duration_cast()

auto duration = duration_cast<seconds>(stop - start);

// Para obtener el valor de duración use el count()
// función miembro en el objeto de duración
cout << duration.count() << endl;
*/

// C++ program to find out execution time of
// of functions
#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>

using namespace std;
using namespace std::chrono;

// For demonstration purpose, we will fill up
// a vector with random integers and then sort
// them using sort function. We fill record
// and print the time required by sort function
int main()
{

    vector<int> values(10000);

    // Generate Random values
    auto f = []() -> int { return rand() % 10000; };

    // Fill up the vector
    generate(values.begin(), values.end(), f);

    // Get starting timepoint
    auto start = high_resolution_clock::now();

    // Call the function, here sort()
    sort(values.begin(), values.end());

    // Get ending timepoint
    auto stop = high_resolution_clock::now();

    // Get duration. Substart timepoints to
    // get durarion. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;

    return 0;
}
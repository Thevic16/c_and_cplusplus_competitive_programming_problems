#include <iostream>

using namespace std;




int main() {

    string recipe;
    cin >> recipe;
    long int nb,ns,nc;
   cin >> nb >> ns >> nc;

    long int pb,ps,pc;
    long long int r;
   cin >> pb >> ps >> pc >>r;


    int len = recipe.length();
    long double B=0;
    long double S=0;
    long double C=0;

    for(int i=0;i<len;i++){

        if(recipe[i] == 'B'){
            B++;
        }

        if(recipe[i] == 'S'){
            S++;
        }

        if(recipe[i] == 'C'){
            C++;
        }

    }

    long double total = B+S+C;

    long double perc_B = (B/total)*r;
    long double perc_S = (S/total)*r;
    long double perc_C = (C/total)*r;

/*
    cout << perc_B <<endl;
    cout << perc_S <<endl;
    cout << perc_C <<endl;

    cout << r_b <<endl;
    cout << r_s <<endl;
    cout << r_c <<endl;
*/

    cout << perc_B <<endl;
    cout << perc_S <<endl;
    cout << perc_C <<endl;


    return 0;
}
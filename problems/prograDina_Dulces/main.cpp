#include <iostream>

using namespace std;

bool juego(int pila,bool turno){

    //jugador A.
    if(pila == 3 and turno==true){
        return false;
    }
    if(pila ==2 and turno==true){
        return true;
    }
    if(pila ==1 and turno==true) {
        return true;
    }
     //jugador B.
    if(pila == 3 and turno==false){
        return true;
    }
    if(pila ==2 and turno==false){
        return false;
    }
    if(pila ==1 and turno==false) {
        return false;
    }

    if(turno ==true){
            if(juego(pila-2,false) or juego(pila-1,false) ){
                return true;
            }
            else{
                return false;
            }
    }
    else {
        if (!juego(pila - 2, true) or !juego(pila - 1, true)) {
            return false;
        } else {
            return true;
        }
    }
}


int main() {
    int pila =100;
    bool turno = true;

    //simulacion del juego.
    cout << juego(pila,turno);

    return 0;
}
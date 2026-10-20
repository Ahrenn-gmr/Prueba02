#include <bits/stdc++.h>
using namespace std;

int main(){
    // VERSION 1.0 -  CORRECCION DE SEGURIDAD 1.O 
    // -------------------
    string name;
    int pin;
    cout << "Bienvenido a la base de datos de la NASA | VERSION 1.0" << endl;
    cout << "Tendras que iniciar sesion primero antes de comenzar..." << endl;
    cout << "======================================" << endl;
    cout << "Nombre de usuario: " << endl;
    cin >> name;
    cout << "PIN: " << endl;
    cin >> pin;
    if(name == "Ahren" && pin == 1992){
        cout << "======================================" << endl;
        cout << "Has iniciado sesion correctamente..." << endl;
        cout << "Bienvenido " << name << endl;
    }
    else {
        cout << "Error: Algun dato esta mal escrito o ambos... Vuelve a Intentarlo";
    }
    return 0;
}
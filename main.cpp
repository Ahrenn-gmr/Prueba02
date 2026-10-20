#include <bits/stdc++.h>
using namespace std;

int main(){
    // VERSION 1.0.2 - Extension del programa
    // -------------------
    string name;
    int pin;
    cout << "Bienvenido a la base de datos de la NASA | VERSION 1.0.2" << endl;
    cout << "Tendras que iniciar sesion primero antes de comenzar..." << endl;
    cout << "======================================" << endl;
    cout << "Nombre de usuario: " << endl;
    cin >> name;
    cout << "PIN: " << endl;
    cin >> pin;
    if(name == "Ahren" && pin == 1992){
        cout << "======================================" << endl;
        cout << "Has iniciado sesion correctamente..." << endl;
        cout << "Bienvenido a la Base de Datos de la NASA, " << name << endl;
        cout << " " << endl;
        cout << "Explora y conoce nuestro sistema solar!" << endl;
        cout << "¿Qué deseas ver sobre el sistema solar?" << endl;
        cout << "Nuestros Planetas, Dato Interesante del dia o Quizá que tipo de estrella orbitamos" << endl;
        string seleccion;
        cin >> seleccion;
        if(seleccion=="NuestrosPlanetas"){
            cout << "Nuestros planetas en orden del sol hacia adelante son: " << endl;
            cout << "Sol(Nuestra estrella), Mercurio, Venus, Tierra, Marte, Jupiter, Saturno, Urano y Neptuno." << endl;
        }
        else {
            cout << "Esa opcion no existe, procura escribir bien la seccion seleccionada..." << endl;
        }
    }
    else {
        cout << "Error: Algun dato esta mal escrito o ambos... Vuelve a Intentarlo";
    }
    return 0;
}
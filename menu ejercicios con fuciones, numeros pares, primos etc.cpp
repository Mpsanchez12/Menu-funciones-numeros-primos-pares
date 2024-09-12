/*1) Numeros pares hasta N escribe un programa que pida a el usuario un numero entero postivo y luego imprima todos
los numeros pares desde numero hasta ese numero que escribio
si el numero es impar deberia indicar que es impar

2) Crea un programa que le pida a el usuario un numero entero positivo y determine si es un numero primo un numero es
primo si solo es divicible por uno y por si mismo si es primo debera indicarlo sino debera mostrar los divosres de numero

3) Escribe un programa que le pida a el usuario un numero entero y cuente cuantos digitos tiene el programa debe seguir solicitando
numeros hasta que el usuario ingrese un numero negativo en cuyo caso el programa termina
*/
#include <iostream>
using namespace std;

void numerosPares() {
    int numero;
    cout << "Introduzca un numero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, ingrese un numero entero positivo." << endl;
        return;
    }

    if (numero % 2 != 0) {
        cout << "El numero " << numero << " es impar." << endl;
    } else {
        cout << "Imprimiendo los numeros pares hasta " << numero << ":" << endl;
        for (int i = 2; i <= numero; i += 2) {
            cout << i << endl;
        }
    }
}

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    if (numero == 2) return true;
    if (numero % 2 == 0) return false;

    for (int i = 3; i <= numero / 2; i += 2) {
        if (numero % i == 0) return false;
    }
    return true;
}


void mostrarDivisores(int numero) {
    cout << "Divisores de " << numero << ": ";
    for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void numerosprimos() {
    int numero;
    cout << "Introduzca un numero entero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, introduzca un numero entero positivo." << endl;
        return;
    }

    if (esPrimo(numero)) {
        cout << numero << " es un numero primo." << endl;
    } else {
        mostrarDivisores(numero);
    }
}

int contarDigitos(int numero) {
    if (numero == 0) return 1;
    int digitos = 0;
    while (numero != 0) {
        numero /= 10;
        digitos++;
    }
    return digitos;
}

void Numerosysusdigtos() {
    int numero;
    cout << "Introduzca un Numero Entero (Negativo para salir): ";
    cin >> numero;

    if (numero < 0) {
        cout << "---Saliendo---" << endl;
        return;
    }

    int cantidadDeDigitos = contarDigitos(numero);
    cout << "El numero " << numero << " tiene " << cantidadDeDigitos << " digitos" << endl;
}


int main() {
    int opcion;

    do {
        cout << "\n---Menu de opciones---" << endl;
        cout << "1) Numeros Pares" << endl;
        cout << "2) Numeros Primos" << endl;
        cout << "3) Numeros enteros y sus digitos" << endl;
        cout << "0) Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                numerosPares();
                break;
            case 2:
                numerosprimos();
                break;
            case 3:
                Numerosysusdigtos();
                break;
            case 0:
                cout << "Saliendo del programa"<<endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, ingresa un numero del 1 al 3(0 para salir)." << endl;
                break;
        }


    } while (opcion != 0);

    return 0;
}



#include <iostream>
#include "libs/NumberList.h"
#include "libs/NumberMatrix.h"
#include "time.h"

using namespace std;

void printMenu();

int main() {

    printMenu();

    int option = 0;
    NumberList list;
    NumberMatrix matrix;
//
    NumberList numeroveces;
    NumberList conteos;
    NumberList sinrepetir;
    NumberMatrix matriz;

    do {
        cout << "Ingrese una opcion: ";
        cin >> option;

       switch (option){

            case 1:
            {
                cout << "Opcion 1" << endl;
                generateNumberListWithRandomNumbers(list);
                cout << list.toString() << endl;
                }
                break;
            case 2:
            {
                cout << "Opcion 2" << endl;
                getNumberListWithoutRepetitions(sinrepetir, list);
                cout << sinrepetir.toString() << endl;
                }
                break;
            case 3:
            {
            cout << "Opcion 3" << endl;
            getNumberListWithNumberOfRepetitions(numeroveces, conteos, list);
            cout << conteos.toString() << endl;
                }
                break;
            case 4:
            {
                cout << "Opcion 4" << endl;
                generateNumberMatrixWithRandomNumbers(matrix);
                cout << matriz.toString() << endl;
                }
                break;
            case 5:
            {
                cout << "Opcion 5" << endl;
            for(int c = 0; c < 5; c++) {
            int minimo = 10;
            int filaminimo = 1;
            //getMinimumValueOfColumn(matrix, minimo, filaminimo, c);
            cout << "Columna: " << c << endl;
            cout << "Fila: " << filaminimo << endl;
            cout << "Valor: " << minimo << endl;
            cout << endl;
            }
                }
                break;
            case 0:
            {
                cout << "Saliendo..." << endl;
                }
                break;
            default:
                cout << "Opción inválida" << endl;
                break;
        }

    } while (option != 0);

    return 0;
}

void printMenu() {
    cout << "1. Crear e imprimir una lista de números enteros de 20 elementos." << endl;
    cout << "2. Crear e imprimir una lista de números sin repetir." << endl;
    cout << "3. Crear e imprimir una lista de números con el número de veces que aparece el número en la lista del punto 1." << endl;
    cout << "4. Generar una matriz de 5x5 con números aleatorios" << endl;
    cout << "5. Generar una función que imprima los valores mímimos de cada columna, indicando el número de la columna y el valor mínimo." << endl;
    cout << "0. Salir" << endl;
}

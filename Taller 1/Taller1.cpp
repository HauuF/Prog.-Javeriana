#include <iostream>
#include "libs/NumberList.h"
#include "libs/NumberMatrix.h"

using namespace std;

void printMenu();

int main() {
    
    printMenu();

    int option = 0;
    NumberList list;
    NumberMatrix matrix;

    do {
        cout << "Ingrese una opción: ";
        cin >> option;

       switch (option){

            case 1:
                cout << "Opción 1" << endl;
                break;
            case 2:
            { 
                cout << "Opción 2" << endl;
                //vector de elementos propios (evitar array [i])
                vector<int> lista_noreply;
                NumberList lista;

                for (int i = 0; i < 20; i++) {
                 int corrector = lista.get(i);
                    //booleano que verifica que corrector vea cual numero esta repetido
                    bool repetido = false;
                    //recordar que size permite que el valor nulo (j) no haga conflcito en el bucle
                 for (int j = 0; j < lista_noreply.size(); j++) {
                     if (lista_noreply[j] == corrector) {
                          repetido = true;
                          break;
                        }
                    }
                 if (!repetido) {
                       lista_noreply.push_back(corrector);
                    }
             }
             for (int i = 0; i < lista_noreply.size(); i++) {
                  cout << lista_noreply[i] << " ";
              }
                }       
                break;
            case 3:
                cout << "Opción 3" << endl;
                break;
            case 4:
                cout << "Opción 4" << endl;
                break;
            case 5:
                cout << "Opción 5" << endl;
                break;
            case 0:
                cout << "Saliendo..." << endl;
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
    cout << "Ingrese una opción: ";
}

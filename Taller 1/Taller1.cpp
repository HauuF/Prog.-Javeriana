#include <iostream>
#include "libs/NumberList.h"
#include "libs/NumberMatrix.h"
#include "vector"

using namespace std;

void printMenu();

int main() {
    
    printMenu();

    int option = 0;
    NumberList list;
    NumberMatrix matrix;
// RECORDAR, SI NO ITERA BIEN Y QUEDA NULA LA VARIABLE, TAL VEZ SEA PORQUE LA LISTA BASE SEA LOCAL Y NO GLOBAL
// 
    NumberList lista;

    NumberList sinrepetir;
    NumberMatrix matriz;

    do {
        cout << "Ingrese una opción: ";
        cin >> option;

       switch (option){

            case 1:
            {
                cout << "Opción 1" << endl;
                int i, j;
                string lista_de_veinte;
                lista.clear();
                srand(time(0));

                for(i=0; i < 20; i++){
                    int num = rand() % 10 + 1;
                    lista.add(num);
                }                  
                lista_de_veinte = lista.toString();
                cout << lista_de_veinte << endl;
                }
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
                cout << "Opción 2" << endl; 
                for (int i = 0; i < lista.size; i++) {
                int actual = lista.get(i);  
                if (!sinrepetir.contains(actual)) {
                sinrepetir.add(actual);
                }  
              }
                }       
                NumberList sinrepetir;
  
                 for (int i = 0; i < lista.size; i++) {
                 int actual = lista.get(i);  
                 if (!sinrepetir.contains(actual)) {
                      sinrepetir.add(actual);
                    }  
                }

                for (int i = 1; i <= 10; i++) {
                 if (!sinrepetir.contains(i)) {
                 sinrepetir.add(i); 
                    } 
                }
                string lista_sin_repetir = sinrepetir.toString();
                cout << lista_sin_repetir << endl;             
                }        
                break;
            case 3:
            {
                cout << "Opción 3" << endl;
                NumberList numeroveces;

                for (int i = 0; i < lista.size; i++) {
                    int actual = lista.get(i);
                    int contador = 0;
                 for (int j = 0; j < lista.size; j++) {
                        if(lista.get(j) == actual) {
                        contador++;
                        }
                    }
                    numeroveces.add(contador); 
                    }
                string reiteraciones = numeroveces.toString();
                cout << reiteraciones << endl;
                }
                break;
            case 4:
            {
                
            {    
                cout << "Opción 4" << endl;
                matriz.clear();
                srand(time(0));
                for(int i = 0; i < 5; i++) {
                NumberList rowrandom;
                for(int j = 0; j < 5; j++) {
                    int num = rand() % 10 + 1;
                    rowrandom.add(num); 
                }
                matriz.addRow(rowrandom);
                }
                cout << matriz.toString() << endl;
                }
                break;
            case 5:
            {
                cout << "Opción 5" << endl;
               
                for(int c = 0; c < 5; c++) {
            int minimo = 10;
            int filaminimo = 1;

            for(int f = 0; f < 5; f++) {
            int valor = matriz.get(f, c);
            if (valor < minimo) {
            minimo = valor;
            filaminimo = f;  
                } 
            }
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
    cout << "Ingrese una opción: ";
}

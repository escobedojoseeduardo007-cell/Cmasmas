#include <iostream>
using namespace std;
int main() {
    // Implementación en C++
    int r = 3;
    int c = 3;
    int arr[r * c];
    // Matriz inicializada
    int TwoDArr[3][3] = { {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9} };
    // Almacenar elementos en un array unidimensional
    // ordenados por filas
    int k = 0;
    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            k = x * c + y;
            arr[k] = TwoDArr[x][y];
            k++;
        }
    }
    // Mostrar elementos del array bidimensional por columnas
    cout << "Los elementos del array bidimensional son:" << endl;
    for (int y = 0; y < c; y++) {
        for (int x = 0; x < r; x++) {
            cout << TwoDArr[x][y] << " ";
        }
        cout << endl;
    }
    // Mostrar elementos del array unidimensional
    cout << "\nLos elementos del array unidimensional son:" << endl;
    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            cout << arr[x * c + y] << " ";
        }
    }
    return 0;
}
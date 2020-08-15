#include <iostream>
#include <ctime>

using namespace std;

/*
 * Funcion para imprimir el arreglo.
 */
void print(int arrayN[], int n) {
    cout << "[";
    for(int i = 0; i < n; i++) {
        if(i < n - 1) {
            cout << arrayN[i] << ", ";
        } else {
            cout << arrayN[i];
        }
    }
    cout << "]" << endl;
}

/*
 * Funcion insercion -> ordenamiento.
 */
void insercion(int arrayN[], int n) {
    int aux, i = 1, j;

    while(i <= n) {
        aux = arrayN[i];
        j = i;

        while(j > 0 and aux < arrayN[j-1]) {
            arrayN[j] = arrayN[j-1];
            j--;
        }

        if(i != j) {
            arrayN[j] = aux;
        }
        i++;
    }
}

/*
 * Funcion principal.
 */
int main() {
    srand(time(0));
    int arrayNum[10];
    int length = (sizeof(arrayNum) / sizeof(*arrayNum));

    for(int i = 0; i < 10; i++) {
        arrayNum[i] = 1 + rand() % 100;
    }

    cout << "Ordenamiento de Insercion" << endl;
    cout << "- Longitud del arreglo: " << length << endl;
    cout << "- Arreglo original: ";
    print(arrayNum,length);

    insercion(arrayNum, length - 1);

    cout << "- Arreglo ordenado: ";
    print(arrayNum,length);
    return 0;
}

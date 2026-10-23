
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int semilla;
    int dado;
    int contador = 0;

    cout << "Introduce una semilla: ";
    cin >> semilla;

    srand(semilla);

    for (int i = 0; i < 10; i++) {
        dado = rand() % 7;

        cout << "Tirada: " << dado << endl;

        if (dado == 6) {
            contador++;
        }
    }
        cout << "El numero 6 ha salido " << contador << "veces.";
  

    return 0;
}

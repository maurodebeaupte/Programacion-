
#include <iostream>
#include <cstdlib>

int main() {
    int semilla;
    int contador = 0;
    int dado;

    std::cout << "Introduce una semilla: ";
    std::cin >> semilla;

    srand(semilla);

    for (int i = 0; i < 10; i++) {
        dado = rand() % 7;

        std::cout << "Tirada: " << dado << std::endl;

        if (dado == 6) {
            contador++;
        }
    }

    std::cout << "El 6 ha salido " << contador << " veces.";

    return 0;
}

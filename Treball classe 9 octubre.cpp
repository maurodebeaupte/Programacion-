#include <iostream>
#include <string>
#include <cstdio>

int main()
{
    std::string ip;

    int intentos;
    int fallidos;

    // 1. SOLICITAR DATOS

    std::cout << "Direccion IP: ";
    std::cin >> ip;

    std::cout << "Intentos totales: ";
    std::cin >> intentos;

    std::cout << "Intentos fallidos: ";
    std::cin >> fallidos;


    // 2. EXTRAER LOS NUMEROS DE LA IP


    int a = 0, b = 0, c = 0, d = 0;
    char extra = '\0';

    int campos = sscanf_s(
        ip.c_str(),
        "%d.%d.%d.%d%c",
        &a, &b, &c, &d, &extra, 1u
    );

    // Comprobamos que hay cuatro numeros
    // y que sus valores estan entre 0 y 255.

    if (campos != 4 ||
        a < 0 || a > 255 ||
        b < 0 || b > 255 ||
        c < 0 || c > 255 ||
        d < 0 || d > 255)
    {
        std::cout << "ERROR: IP incorrecta.\n";
    }
    


    // 3. VALIDAR LOS INTENTOS
    // TODO: Comprobar que los datos tienen sentido.
    if (intentos <= 0 || fallidos < 0 || fallidos > intentos) {
        std::cout << "Intentos incorrectos. \n";
        return 1;
    }

    

    // 4. CALCULAR EL PORCENTAJE
    // TODO: Calcular el porcentaje de intentos fallidos.

    int porcentage = (fallidos * 100) / intentos;

        // 5. MOSTRAR LOS RESULTADOS
        // TODO: Mostrar la IP y el porcentaje.
    std::cout << "La IP es: " << ip << std::endl;
    std::cout << "El " << porcentage << "% de intentos han sido fallidos" << std::endl;

        // 6. CLASIFICAR LA ACTIVIDAD
        // TODO: Crear las condiciones de alerta.
    if (fallidos >= 25) {
        std::cout << "Avtividad realizada con exito";
    }
    else {
        std::cout << "Actividad denegada";
    }

        return 0;
}
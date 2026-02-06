#include <iostream> // cout
#include "util.h"

// g++ main.cpp util.cpp -o main
int main(){
    std::cout << "MCS-2026-PM\n";
    int x = 20, y = 45, r;
    float f1, f2, f3;

// 1. Bernaola Gayoso - César Raúl


// 2. Cuadros-Vargas Ernesto
    std::cout << "Demo Cuadros Vargas Ernesto" << std::endl;
    x = 20, y = 45;
    intercambiar(x, y);
    std::cout << "x=" << x << " y=" << y << "\n\n";

// 3. Diaz Tapia Adderly
// substraction
    x = 5;

// 4. Lopez Flores Royer Amed
// multiplication

// 5. López Sandoval, Heiner
// division

// 6. Mallaupoma Cesar
// genera un numero aleatorio

// 7. Miranda Zarate Jorge Luis
// factorial

// 8. Riveros Guevara
// IsPrime
    std::cout << "Demo Cuadros Vargas Ernesto" << std::endl;
    int n = 29;
    if (esPrimo(n))
        std::cout << n << " es primo \n\n";
    else
        std::cout << n << " no es primo\n\n";


// 9. Segovia Giancarlo
// fibonacci

// 10. Suarez Maciel Susana Isabel
// average()
    std::cout << "Demo Susana Suarez Maciel" << std::endl;
    float prom = average(x,y);
    std::cout << "Promedio(x,y)=" << prom << "\n\n";

// 11. Tellez Jhon
// sumar 10 numeros naturales

// 12. Valcarcel Julian
// float round(float f, int n)
    std::cout << "Demo Julian Valcarcel" << std::endl;
    f1 = 3.14159;  // Usamos f1 que ya existe arriba
    x = 2;         // Usamos x para la cantidad de decimales
    std::cout << "Redondear " << f1 << " a " << x << " decimales: " << redondear(f1, x) << "\n\n";

// 13. Vilca Aguilar Luis
// root
    std::cout << "Demo Vilca Aguilar Luis" << std::endl;
    f1 = 23.0;
    raiz(f1);
    std::cout << "La raiz de (" << f1 << ")=" << raiz(f1) << "\n\n";
    
    return 0;
}
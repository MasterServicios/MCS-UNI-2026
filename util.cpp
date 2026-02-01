#include "util.h"
#include <cmath>

// 1. Bernaola Gayoso - César Raúl

// 2. Cuadros-Vargas Ernesto
void intercambiar(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

// 3. Diaz Tapia Adderly

// 4. Lopez Flores Royer Amed

// 5. López Sandoval, Heiner

// 6. Mallaupoma Cesar


// 7. Miranda Zarate Jorge Luis


// 8. Riveros Guevara

bool esPrimo(int &n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// 9. Segovia Giancarlo


// 10. Suarez Maciel Susana Isabel
float average(int x, int y){
    return (x + y)/2.0f;

}

// 11. Tellez Jhon


// 12. Valcarcel Julian


// 13. Vilca Aguilar Luis
float raiz(float a){
    return sqrt(a);
}

// 14. Vinatea Chávez Camilo Jorge


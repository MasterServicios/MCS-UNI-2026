#ifndef __POINTERS_H__
#define __POINTERS_H__
#include <iostream>
#include <string>
#include "util.h"

using namespace std;

template <typename T>
void aviso(string msg, T x){
    cout << msg << x << endl;
}

struct S{
    T1   a;       // 8 bytes en arq de 64 bit
    char nom[5];  // Ocupa 5 y se pierden los siguientes 3
    T2   b;       // Ocupa 4 y se pierden los siguientes 4
    unsigned int  x:3 =1, y:3= 5, z:1=1;
};

union U{
    T1   a;       // 8 bytes en arq de 64 bit
    char nom[20];  // Ocupa 5 y se pierden los siguientes 3
    T2   b;       // Ocupa 4 y se pierden los siguientes 4
    unsigned int  x:3 =1, y:3, z:1;
};

struct Variant{
    bool m_type; // Indica si el valor almacenado es un int o un float
    union {
        int i;   // Almacena un int
        float f; // Almacena un float
        double d; // Almacena un double
        long long ll; // Almacena un long long
        char c; // Almacena un char
        int * pi; // Almacena un puntero a int
    } value;     // Unión para almacenar el valor, solo se puede usar uno a la vez
};

template <typename T>
void PrintS(T &s){
    // s.a = 100; // Modifica el miembro a de la estructura s
    cout <<   "a  : " << s.a   << "(" << &s.a   << "), " << sizeof(s.a) << " bytes."
         << ", nom: " << s.nom << "(" << &s.nom << "), " << sizeof(s.nom) << " bytes."
         << ", b  : " << s.b   << "(" << &s.b   << "), " << sizeof(s.b) << " bytes."
         << ", x  : " << s.x   
         << ", y  : " << s.y   
         << ", z  : " << s.z   
        << " Total: " << sizeof(s) << " bytes"
         << endl;
}

template <typename T>
void PrintT(T *pS){
    PrintS(*pS);
}

void DemoBasico();

// Aqui veremos varios tipos de parametros
void DemoParametros();

void DemoPunteros();
void DemoEstructuras();
void DemoChars();

#endif // __POINTERS_H__
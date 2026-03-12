#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <iostream>

// Clase base para todos los empleados
class Empleado {
protected:
    std::string nombre;
    int id;
    double salarioBase;

public:
    Empleado(const std::string& n, int i, double s) 
        : nombre(n), id(i), salarioBase(s) {}

    // Destructor virtual para que se borre bien todo
    virtual ~Empleado() {
        std::cout << "Borrando empleado: " << nombre << std::endl;
    }

    // Funcion virtual pura (hace que la clase sea abstracta)
    virtual double calcularSalario() const = 0;

    // Funcion virtual para mostrar informacion
    virtual void mostrarInfo() const {
        std::cout << "ID: " << id << " | Nombre: " << nombre 
                  << " | Sueldo Base: $" << salarioBase;
    }
};

#endif

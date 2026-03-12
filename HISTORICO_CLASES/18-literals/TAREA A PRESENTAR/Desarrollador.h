#ifndef DESARROLLADOR_H
#define DESARROLLADOR_H

#include "Empleado.h"

/**
 * @brief Clase que representa a un Desarrollador.
 * Demuestra: Herencia y sobrescritura de métodos.
 */
class Desarrollador : public Empleado {
private:
    std::string lenguajePrincipal;

public:
    Desarrollador(const std::string& n, int i, double s, const std::string& lp)
        : Empleado(n, i, s), lenguajePrincipal(lp) {}

    // Polimorfismo: sobrescribimos calcularSalario
    double calcularSalario() const override {
        // Un desarrollador tiene un bono por lenguaje
        return salarioBase + 500.0;
    }

    void mostrarInfo() const override {
        Empleado::mostrarInfo();
        std::cout << " | Tipo: Desarrollador [" << lenguajePrincipal << "]" 
                  << " | Salario Total: $" << calcularSalario() << std::endl;
    }
};

#endif

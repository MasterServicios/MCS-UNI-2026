#ifndef GERENTE_H
#define GERENTE_H

#include "Empleado.h"

/**
 * @brief Clase que representa a un Gerente.
 * Demuestra: Herencia y polimorfismo.
 */
class Gerente : public Empleado {
private:
    int personalACargo;

public:
    Gerente(const std::string& n, int i, double s, int pac)
        : Empleado(n, i, s), personalACargo(pac) {}

    double calcularSalario() const override {
        // Un gerente gana un bono por cada persona a cargo
        return salarioBase + (personalACargo * 100.0);
    }

    void mostrarInfo() const override {
        Empleado::mostrarInfo();
        std::cout << " | Tipo: Gerente [" << personalACargo << " personas]" 
                  << " | Salario Total: $" << calcularSalario() << std::endl;
    }
};

#endif

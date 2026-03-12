#ifndef EMPRESA_H
#define EMPRESA_H

#include "Empleado.h"
#include <vector>

/**
 * @brief Clase que gestiona una lista de empleados.
 * Demuestra: Uso de contenedores (vector) y punteros tradicionales.
 */
class Empresa {
private:
    std::string nombre;
    // Usamos punteros tradicionales para que sea mas facil de entender
    std::vector<Empleado*> nomina;

public:
    Empresa(const std::string& n) : nombre(n) {}

    // Destructor para limpiar la memoria manualmente
    ~Empresa() {
        for (size_t i = 0; i < nomina.size(); i++) {
            delete nomina[i];
        }
    }

    void contratar(Empleado* nuevo) {
        nomina.push_back(nuevo);
    }

    void mostrarNomina() const {
        std::cout << "--- Nomina de " << nombre << " ---" << std::endl;
        for (size_t i = 0; i < nomina.size(); i++) {
            // Llamada polimorfica
            nomina[i]->mostrarInfo();
        }
        std::cout << "---------------------------------" << std::endl;
    }

    double calcularGastoTotal() const {
        double total = 0;
        for (size_t i = 0; i < nomina.size(); i++) {
            total += nomina[i]->calcularSalario();
        }
        return total;
    }
};

#endif

#include <iostream>
#include "Desarrollador.h"
#include "Gerente.h"
#include "Empresa.h"

int main() {
    // 1. Ejemplo rapido de Punteros y Polimorfismo
    std::cout << "1. Ejemplo de Punteros:" << std::endl;
    
    // Un puntero de la base puede apuntar a un objeto derivado
    Empleado* miEmpleado = new Desarrollador("Julian", 101, 3000.0, "C++");
    miEmpleado->mostrarInfo();
    
    delete miEmpleado; // Borramos manualmente
    
    std::cout << "\n2. Uso de la clase Empresa (Nomina):" << std::endl;
    
    Empresa miEmpresa("Mi Empresa UNI");
    
    // Agregamos empleados usando 'new'
    miEmpresa.contratar(new Desarrollador("Ana", 201, 3500.0, "Python"));
    miEmpresa.contratar(new Gerente("Pedro", 202, 5000.0, 5));
    miEmpresa.contratar(new Desarrollador("Luis", 203, 3200.0, "Java"));
    
    miEmpresa.mostrarNomina();
    
    std::cout << "Sueldo total a pagar: $" << miEmpresa.calcularGastoTotal() << std::endl;
    
    std::cout << "\nFin del programa. La memoria se limpia en el destructor de Empresa." << std::endl;
    
    return 0;
}

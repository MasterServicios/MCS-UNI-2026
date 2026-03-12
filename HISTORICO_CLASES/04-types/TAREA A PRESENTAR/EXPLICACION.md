# EXPLICACIÓN DE MI TAREA - C++

Profesor, en este proyecto he aplicado lo que hemos visto en clase sobre punteros, clases, herencia y polimorfismo de una manera sencilla.

## 1. Clases y Objetos
He creado varias clases para organizar el sistema:
- `Empleado`: Es la clase "padre" o base. No se pueden crear empleados genéricos porque es una clase abstracta.
- `Desarrollador` y `Gerente`: Son las clases que heredan de Empleado.
- `Empresa`: Es la que guarda a todos los empleados en una lista.

## 2. Herencia
Como todos los empleados tienen un nombre y un ID, puse eso en la clase `Empleado`. Luego, `Desarrollador` y `Gerente` heredan esas cosas y le agregan lo suyo (como el lenguaje de programación o la cantidad de gente a cargo).

## 3. Polimorfismo
Esta es la parte que más me costó entender pero que apliqué aquí:
- Use funciones `virtual`. Esto permite que, aunque yo tenga un puntero de tipo `Empleado*`, el programa sepa si realmente es un `Desarrollador` o un `Gerente` al momento de calcular el sueldo o mostrar la info.
- El destructor también es `virtual` para que no haya problemas de memoria al borrar los objetos.

## 4. Punteros y Memoria
- Use punteros tradicionales con `new` para crear los objetos.
- En la clase `Empresa`, me aseguré de usar `delete` dentro del destructor para que cuando el programa termine, se libere toda la memoria correctamente.

---
**Nota:** Para ejecutarlo, simplemente compile el `main.cpp`.
```bash
g++ main.cpp -o tarea.exe
```

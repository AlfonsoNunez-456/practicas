/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2025-2026
*
* @author Alfonso Reyes Núñez Fernández
* @date Oct 23 2025
* @brief Programa que le solicita al usuario un 
* número entero, para realizar una cuenta atrás
*/
#include <iostream>

int main() {
    int numero;
    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> numero;
    if (numero < 0) {
	    std::cout << "El valor no es positivo" << std::endl;
    } 
    else {
        for (int i = numero; i >= 0; i--) {
		std::cout << i << std::endl;
        }
    }
    return 0;
}


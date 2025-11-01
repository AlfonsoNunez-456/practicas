/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2025-2026
*
* @author Alfonso Reyes Núñez Fernández
* @date Oct 23 2025
* @brief Programa que le solicita al usuario dos
* números y muestra si uno es divisible entre el 
* otro
*/
#include <iostream>

int main() {
    int dividendo, divisor;
    std::cout << "Introduce dos números positivios: ";
    std::cin >> dividendo;
    std::cin >> divisor;
    if (dividendo & divisor == 0)
       std::cout << dividendo << " es divisible entre " << divisor << "." << std::endl;
    else if (divisor % dividendo == 0)
        std::cout << divisor << " es divisible entre " << dividendo << "." << std::endl;
    else {
	    std::cout << dividendo << " y " << divisor << " no son divisibles" << std::endl;
    }
    return 0;
}

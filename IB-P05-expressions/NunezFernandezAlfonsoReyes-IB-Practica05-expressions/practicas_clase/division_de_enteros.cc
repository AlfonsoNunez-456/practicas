/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2025-2026
*
* @author Alfonso Reyes Núñez Fernández
* @date Oct 16 2025
* @brief Calcula el cociente y el resto de una 
* division y usa el static_cast para obtener la
* division real.
*/
#include <iostream>

int main() {
	int dividendo, divisor, cociente, resto; 
	std::cout << "Introduce el dividendo: "; 
	std::cin >> dividendo;
	std::cout << "Introduce el divisor: "; 
	std::cin >> divisor;
	cociente = dividendo / divisor; 
	resto = dividendo % divisor; 
	std::cout << "Division entera: " << cociente << std::endl; 
	std::cout << "Resto: " << resto << std::endl;
       	double cociente_real = static_cast<double>(dividendo) / divisor; 
	std::cout << "Division real: " << cociente_real << std::endl; 
	return 0;
}

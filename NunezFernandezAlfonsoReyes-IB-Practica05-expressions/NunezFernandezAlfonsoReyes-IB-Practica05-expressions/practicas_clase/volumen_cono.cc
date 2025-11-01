/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2025-2026
*
* @author Alfonso Reyes Núñez Fernández
* @date Oct 16 2025
* @brief Calcula el volumen del cono con su 
* radio y su altura, definiendo radio y 
* altura como valores reales
*/

#include <iostream>

int main() {

	double volumen, radio, altura;
	double const pi = 3.14159265; 
	std::cout << "Introduce el radio del cono: "; 
	std::cin >> radio; 
	std::cout << "Introduce la altura del cono: "; 
	std:: cin >> altura;
	volumen = (pi * radio * radio * altura) / 3; 
	std::cout << "Un cono de radio " << radio << " y altura " << altura << " tiene un volumen de " << volumen << std::endl; 
	return 0;

}

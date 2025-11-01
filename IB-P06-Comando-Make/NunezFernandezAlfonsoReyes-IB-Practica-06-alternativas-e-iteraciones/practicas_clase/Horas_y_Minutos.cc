/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2025-2026
*
* @author Alfonso Reyes Núñez Fernández
* @date Oct 23 2025
* @brief Programa que le solicita al usuario
* dos valores enteros y comprobar si da una 
* hora válida
*/
#include <iostream>

int main() {
	int horas;
	int minutos;
	std::cout << "Introduzca dos valores: ";
	std::cin >> horas;
	std::cin >> minutos;
	if (horas > 23 || minutos > 60) {
		std::cout << "No es una hora válida." << std::endl;
	}
	else{
		std::cout << horas << " hora(s) y " << minutos << " minuto(s)." << std::endl;
	}
	return 0;
}

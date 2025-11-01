#include <iostream>
using namespace std;
int main() {
	double lado, area, perimetro;
	cout << "Introduce la longitud del lado: ";
	cin >> lado;
	area = lado * lado * lado;
	perimetro = lado * lado;
	cout << "El area es " << area << " y el perimetro es " << perimetro << "." << endl;
}

#include <iostream>
using namespace std;
int main() {
	double edad, jubilacion;
	cout << "Introduce tu edad: ";
	cin >> edad;
	jubilacion = 65 - edad;
	cout << "Te faltan " << jubilacion << " años para jubilarte." << endl;
}

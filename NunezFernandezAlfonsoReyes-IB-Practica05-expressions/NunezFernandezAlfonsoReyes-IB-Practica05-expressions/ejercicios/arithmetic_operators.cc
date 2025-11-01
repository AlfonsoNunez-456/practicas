#include <iostream>
using namespace std;
int main() {
	int a = 7, b = 3;
	double x = 7.5, y = 2.5;
	cout << "=== Operadores aritmeticos con enteros ===\n";
	cout << a << " + " << b << " = " << (a + b) << endl;
	cout << a << " - " << b << " = " << (a - b) << endl; 
	cout << a << " * " << b << " = " << (a * b) << endl;
	cout << a << " / " << b << " = " << (a / b) << " (divison entera)" << endl;
	cout << a << " % " << b << " = " << (a % b) << endl;
	cout << "\n=== Operadores aritmeticos con reales ===\n";
	cout << x << " + " << y << " = " << (x + y) << endl;
	cout << x << " - " << y << " = " << (x - y) << endl;
	cout << x << " * " << y << " = " << (x * y) << endl;
	cout << x << " / " << y << " = " << (x / y) << endl;
	cout << "\n=== Operadores de comparacion con enteros ===\n";
	cout << a << " == " << b << " -> " << (a == b) << endl;
	cout << a << " != " << b << " -> " << (a != b) << endl; 
	cout << a << " < " << b << " -> " << (a < b) << endl;
	cout << a << " <= " << b << " -> " << (a <= b) << endl;
	cout << a << " > " << b << " -> " << (a > b) << endl;
	cout << a << " >= " << b << " -> " << (a >= b) << endl;
	cout << "\n=== Operaciones de comparacion con reales ===\n";
	cout << x << " == " << y << " -> " << (x == y) << endl;
	cout << x << " != " << y << " -> " << (x != y) << endl;
	cout << x << " < " << y << " -> " << (x < y) << endl;
	cout << x << " <= " << y << " -> " << (x <= y) << endl;
	cout << x << " > " << y << " -> " << (x > y) << endl;
	cout << x << " >= " << y << " -> " << (x >= y) << endl;
	return 0;
}

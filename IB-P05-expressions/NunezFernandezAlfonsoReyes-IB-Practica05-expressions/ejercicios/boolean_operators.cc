#include <iostream>
using namespace std;
int main() {
	bool A, B;
	cout << "Tabla de verdad de los operadores logicos en C++\n";
	cout << "------------------------------------------------\n";
	cout << "A\t B\tA && B\tA || B\t!A \t!B\n";
	cout << "------------------------------------------------\n";
	A = false; B = false;
	cout << A << '\t' << B << '\t' << (A && B) << '\t' << (A || B) << '\t' << (!A) << '\t' << (!B) << '\n';
	A = false; B = true;
	cout << A << '\t' << B << '\t' << (A && B) << '\t' << (A || B) << '\t' << (!A) << '\t' << (!B) << '\n';
	A = true; B = false;
	cout << A << '\t' << B << '\t' << (A && B) << '\t' << (A || B) << '\t' << (!A) << '\t' << (!B) << '\n';
	A = true; B = true;
	cout << A << '\t' << B << '\t' << (A && B) << '\t' << (A || B) << '\t' << (!A) << '\t' << (!B) << '\n';
	return 0;
}

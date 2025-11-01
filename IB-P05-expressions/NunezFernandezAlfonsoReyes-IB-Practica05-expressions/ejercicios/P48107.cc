#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Introudce dos numeros separados por espacios: ";
	cin >> a >> b;
	int d = a / b;
	int r = a % b;
	cout << "La division entre " << a << " y " << b << " es " << d << " y el resto es " << r << endl;
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	char mayuscula;
	cout << "Introduce una letra mayuscula: ";
	cin >> mayuscula;
	char minuscula = mayuscula + ('a' - 'A');
	cout << "La letra minuscula es: " << minuscula << endl;
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    char letra;
    cin >> letra;
    if (letra >= 'A' && letra <= 'Z') {
        letra = letra + ('a' - 'A');
    } else if (letra >= 'a' && letra <= 'z') {
            letra = letra - ('a' - 'A');
    }
    cout << letra << endl;

    return 0;
}


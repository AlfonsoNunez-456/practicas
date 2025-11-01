#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int maximum = a;
    if (b > maximum) maximum = b;
    if (c > maximum) maximum = c;
    cout << maximum << endl;
    return 0;
}



#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double harmonic = 0.0;
    for (int i = 1; i <= n; ++i) {
        harmonic += 1.0 / i;
    }
    cout << fixed << setprecision(4) << harmonic << endl;
    return 0;
}


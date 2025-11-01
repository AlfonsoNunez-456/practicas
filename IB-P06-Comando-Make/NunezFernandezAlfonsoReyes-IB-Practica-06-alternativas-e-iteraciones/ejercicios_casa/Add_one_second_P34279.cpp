#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;
    s += 1;
    if (s == 60) {
        s = 0;
        m += 1;
    }
    if (m == 60) {
        m = 0;
        h += 1;
    }
    if (h == 24) {
        h = 0;
    }
    cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s << endl;
    return 0;
}


#include <iostream>

using namespace std;

// x = 12346 -> 642
// y = 64321 -> 246

int main() {
    int x, y;
    cin >> x >> y;

    int nr1 = 0, nr2 = 0;

    // am scos imparele din x
    while (x != 0) {
        int cif = x % 10;
        x /= 10;
        if (cif % 2 == 0) {
            nr1 = nr1 * 10 + cif;
        }
    }

    // am scos imparele din y
    while (y != 0) {
        int cif = y % 10;
        y /= 10;
        if (cif % 2 == 0) {
            nr2 = nr2 * 10 + cif;
        }
    }

    // am inversat y
    while (nr2 != 0) {
        int cif = nr2 % 10;
        y = y * 10 + cif;
        nr2 /= 10;
    }

    cout << (nr1 == y) << '\n';
}
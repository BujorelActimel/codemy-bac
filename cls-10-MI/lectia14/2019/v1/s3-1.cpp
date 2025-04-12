#include <iostream>

using namespace std;

int Egale(int n) {
    int cifra = -1;

    while (n > 0) {
        if (n % 2 != 0) {
            if (cifra == -1) {
                cifra = n % 10;
            }
            else {
                if (n % 10 != cifra) {
                    return false;
                }
            }
        }

        n /= 10;
    }

    return true;
}

int main() {
    cout << Egale(7727470) << '\n';
    return 0;
}

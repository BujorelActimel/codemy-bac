#include <iostream>

using namespace std;

int suma_div_impari(int nr) {
    int suma = 0;
    for (int d = 2; d <= nr / 2; d++) {
        if (nr % d == 0 && d % 2 == 1) {
            suma += d;
        }
    }
    return suma;
}

int suma_div_pari(int nr) {
    int suma = 0;
    for (int d = 2; d <= nr / 2; d++) {
        if (nr % d == 0 && d % 2 == 0) {
            suma += d;
        }
    }
    return suma;
}


bool major_impar(int nr) {
    return suma_div_impari(nr) > suma_div_pari(nr);
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int numar = a; numar <= b; numar++) {
        if (major_impar(numar)) {
            cout << numar << '\n';
            return 0;
        }
    }

    cout << 0 << '\n';

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int suma(int a, int b) {
    return a + b;
}

void suma_void(int a, int b, int &rez) {
    rez = a + b;
}

int reverse(int num) {
    int result = 0;

    while (num) {
        result = result * 10 + num % 10;
        num /= 10;
    }

    return result;
}

int keep_even(int num) {
    int result = 0;

    while (num) {
        if (num % 2 == 0 && num % 10) {
            result = result * 10 + num % 10;
        }
        num /= 10;
    }

    return reverse(result);
}

void pao(int x, int y, int &rez) {
    rez = (keep_even(x) == reverse(keep_even(y)));
}

int main() {
    int rez;

    pao(814, 7003465, rez);

    cout << rez << '\n';

    return 0;
}

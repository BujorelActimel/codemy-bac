#include <iostream>
using namespace std;


void pao(int x, int y, int &rez) {
    int nouX = 0;

    while (x) {
        int ult_cif = x % 10;

        if (ult_cif && ult_cif % 2 == 0) {
            nouX = nouX * 10 + ult_cif;
        }

        x /= 10;
    }

    int nouY = 0;
    int p = 1;

    while (y) {
        int ult_cif = y % 10;

        if (ult_cif && ult_cif % 2 == 0) {
            nouY = nouY + ult_cif * p;
            p *= 10;
        }

        y /= 10;
    }

    rez = (nouX == nouY && nouX);
}

int reverse(int num) {
    int result = 0;
    while (num) {
        result = result * 10 + num % 10;
        num /= 10;
    }
    return result;
}

int keepEven(int num) {
    int result = 0;
    while (num) {
        if (num % 10 && num % 2 == 0) {
            result = result * 10 + num % 10;
        }
        num /= 10;
    }
    return reverse(result);
}

void pao_v2(int x, int y, int &rez) {
    rez = (reverse(keepEven(x)) == keepEven(y) && keepEven(x));
}

int main() {
    int rez = -1;

    pao_v2(814, 7003485, rez);

    cout << rez << '\n';

    return 0;
}
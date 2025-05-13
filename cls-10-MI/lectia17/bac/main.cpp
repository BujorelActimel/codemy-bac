#include <iostream>
using namespace std;

int produsDiv(int num) {
    int prod = 1;

    for (int div = 1; div <= num; div += 2) {
        if (num % div == 0) {
            prod *= div;
        }
    }

    return prod;
}

int MaxImp(int a, int b) {
    for (int numar = b; numar >= a; numar--) {
        if (produsDiv(numar) > numar) {
            return numar;
        }
    }
    return 0;
}

int main() {
    cout << MaxImp(14, 19) << '\n';
    return 0;
}
#include <iostream>
#include <fstream>


using namespace std;

int prim(int num) { // -> 1 daca e prim si 0 daca nu e prim
    int nr_div = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            nr_div++;
        }
    }
    
    if (nr_div == 2) {
        return 1;
    }
    else {
        return 0;
    }
}

int nrdiv(int x) {
    int nr = 0;
    for (int div = 2; div <= x; div++) {
        if (x % div == 0 && prim(div)) {
            nr++;
        }
    }
    return nr;
}

// 8: 1 2 4 8

int nrdivTudor(int x) {
    int nr = 0;
    int div = 2;

    while (x > 1) {
        if (x % div == 0) {
            nr++;
            while (x % div == 0) {
                x /= div;
            }
        }
        div++;
    }

    return nr;
}

int main() {
    ifstream fin("bac.in");

    int n;
    fin >> n;

    int prim = -1, ultim = -1;

    for (int i = 0; i < n; i++) {
        int numar;
        fin >> numar;
        if (nrdivTudor(numar) % 2 == 0) {
            ultim = numar;
            if (prim == -1) {
                prim = numar;
            }
        }
    }

    cout << prim << ' ' << ultim << '\n';

    return 0;
}
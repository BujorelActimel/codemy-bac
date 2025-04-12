#include <bits/stdc++.h>
using namespace std;

int len(int nr) {
    int rez = 0;
    while (nr) {
        rez++;
        nr /= 10;
    }
    return rez;
}

int rotate(int nr) {
    int p = pow(10, len(nr)-1);

    return nr % p * 10 + nr / p;
}

int nrmaxim(int nr) {
    int nrMaxim = nr;

    for (int i = 0; i < len(nr)-1; i++) {
        nr = rotate(nr);
        nrMaxim = max(nrMaxim, nr);
    }

    return nrMaxim;
}

int main() {
    cout << nrmaxim(4273) << '\n';

    return 0;
}

// 4273 -> 2734 -> 7342 -> 3427


// 12345 -> 23451 -> 34512 -> 45123 -> 51234

#include <iostream>
#include <fstream>
using namespace std;

int checkPalindrom(int v[], int n) {
    int st = 0, dr = n-1;

    while (st < dr) {
        if (v[st] != v[dr]) {
            return 0;
        }
        st++;
        dr--;
    }

    return 1;
}

void rotate(int v[], int n) {
    int prim = v[0];

    for (int i = 0; i < n-1; i++) {
        v[i] = v[i+1];
    }

    v[n-1] = prim;
}


int main() {
    ifstream fin("palindrom_ciclic.in");
    ofstream fout("palindrom_ciclic.out");

    int n, v[1000];
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (checkPalindrom(v, n)) {
            fout << "DA " << i << '\n';
            return 0;
        }
        rotate(v, n);
    }

    fout << "NU\n";

    return 0;
}

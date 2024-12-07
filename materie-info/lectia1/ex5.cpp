#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("sortcif2.in");
    ofstream fout("sortcif2.out");

    int n;
    fin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    // sortam numerele
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            int primaCifraI = a[i];
            int primaCifraJ = a[j];

            while (primaCifraI > 9) {
                primaCifraI /= 10;
            }

            while (primaCifraJ > 9) {
                primaCifraJ /= 10;
            }

            if (primaCifraI > primaCifraJ) {
                swap(a[i], a[j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        fout << a[i] << ' ';
    }

    fout << '\n';
    return 0;
}

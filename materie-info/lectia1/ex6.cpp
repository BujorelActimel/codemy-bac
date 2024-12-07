#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("halfsort2.in");
    ofstream fout("halfsort2.out");

    int n;
    fin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    // sortam numerele de pe pozitii pare
    for (int i = 1; i < n-1; i += 2) {
        for (int j = i + 2; j < n; j += 2) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }

    for (int i = 0; i < n-1; i += 2) {
        for (int j = i + 2; j < n; j += 2) {
            if (a[i] < a[j]) {
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

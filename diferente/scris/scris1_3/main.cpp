#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");

    int n;
    fin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    // sortez vectorul
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] != a[i + 1]) {
            fout << a[i] << ' ';
        }
    }
}

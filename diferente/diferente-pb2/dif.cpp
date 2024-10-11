#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");

    int n, m;
    fin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    fin >> m;
    int b[m];
    for (int i = 0; i < m; i++) {
        fin >> b[i];
    }

    int Min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < Min) {
            Min = a[i];
        }
    }

    int contor = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] < Min) {
            contor++;
        }
    }
    fout << contor;

}
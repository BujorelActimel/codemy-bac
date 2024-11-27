#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("vecini1.in");
    ofstream fout("vecini1.out");

    int n, m;
    fin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fin >> a[i][j];
        }
    }
    int raspuns = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int vecini[] = {-1, -1, -1, -1};
            // sus scad i
            if (i-1 >= 0) {
                vecini[0] = a[i-1][j];
            }
            // jos cresc i
            if (i+1 < n) {
                vecini[1] = a[i+1][j];
            }
            // stanga scad j
            if (j-1 >= 0) {
                vecini[2] = a[i][j-1];
            }
            // dreapta cresc j
            if (j+1 < m) {
                vecini[3] = a[i][j+1];
            }

            int ok = 1;

            for (int k = 0; k < 3; k++) {
                for (int p = k + 1; p < 4; p++) {
                    if (vecini[k] == vecini[p] && vecini[k] != -1) {
                        ok = 0;
                    }
                }
            }

            if (ok) {
                raspuns++;
            }
        }
    }

    fout << raspuns << '\n';
    return 0;
}
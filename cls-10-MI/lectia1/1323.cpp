// A = (0 0 0
//      1 1 2 
//      0 0 0)
// 3
// (2 1 1)
// (2 2 1)
// (2 3 2)

// B = (0 0 0
//      1 1 2 
//      0 0 0)
// 3
// (2 1 1)
// (2 2 1)
// (2 3 2)


// C = (0 0 0
//      2 2 4 
//      0 0 0)
// 3
// (2 1 2)
// (2 2 2)
// (2 3 4)
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("matrice_rara.in");
    ofstream fout("matrice_rara.out");

    int n, m;
    fin >> n >> m;

    int N1, N2;
    fin >> N1 >> N2;

    int A[n][m] = {0}, B[n][m] = {0};

    for (int i = 0; i < N1; i++) {
        int x, y, valoare;
        fin >> x >> y >> valoare;
        A[x-1][y-1] = valoare;
    }

    for (int i = 0; i < N2; i++) {
        int x, y, valoare;
        fin >> x >> y >> valoare;
        B[x-1][y-1] = valoare;
    }

    int Rez[n][m] = {0};
    int dif_0 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            Rez[i][j] = A[i][j] + B[i][j];
            if (Rez[i][j] != 0) {
                dif_0++;
            }
        }
    }

    fout << dif_0 << '\n';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (Rez[i][j] != 0) {
                fout << i+1 << ' ' << j+1 << ' ' << Rez[i][j] << '\n';
            }
        }
    }
    return 0;
}
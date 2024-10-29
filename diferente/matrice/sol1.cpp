#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];


    // i-ul reprezinta numarul liniei
    for (int i = 0; i < n; i++) {
        // j-ul reprezinta numarul coloanei
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Observatie!!!
    // Acum incep de la j, ca sa raman pe coloana respectiva
    // ex cand am citit vaorile le-am citit linie cu linie:
    // a[0][0], a[0][1], a[0][2] si asa mai departe
    // acum parcurgem pe coloane, deci
    // a[0][0], a[1][0], a[2][0] si asa mai departe
    // iar in minColoana calculam elementul minim al coloanei
    for (int j = 0; j < n; j++) {
        int minColoana = a[0][j]; // setez minimul egal cu primul element al coloanei
        for (int i = 0; i < n; i++) {
            if (a[i][j] < minColoana) {
                minColoana = a[i][j];
            }
            // SAU
            // minColoana = min(minColoana, a[i][j]);
        }
        // dupa ce l-am gasit il afisez
        cout << "Minimul de pe coloana " << j << " este " << minColoana << '\n';
    }

    return 0;
}

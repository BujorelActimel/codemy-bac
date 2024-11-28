#include <fstream>

using namespace std;

// structura triplet retine coordonatele 
// x si y a unui element din matrice 
// si valoarea de la pozitia respectiva
struct Triplet {
    int x, y, valoare;
};

int main() {
    ifstream fin("matrice_rara.in");
    ofstream fout("matrice_rara.out");

    int n, m, N1, N2;
    fin >> n >> m >> N1 >> N2;

    // A, B si Rez sunt vectori de Triplete
    Triplet* A = new Triplet[N1];
    Triplet* B = new Triplet[N2];
    Triplet* Rez = new Triplet[N1 + N2];

    // citesc tripletele din A
    for (int i = 0; i < N1; i++) {
        fin >> A[i].x >> A[i].y >> A[i].valoare;
    }

    // citesc tripletele din B
    for (int i = 0; i < N2; i++) {
        fin >> B[i].x >> B[i].y >> B[i].valoare;
    }

    // parcurg tripletele in stil de interclasare
    int NRez = 0;
    int i = 0, j = 0;
    while (i < N1 && j < N2) {
        // daca elementul din A are poz 
        // diferita si e inainte de cel din B
        if (A[i].x < B[j].x || (A[i].x == B[j].x && A[i].y < B[j].y)) {
            Rez[NRez] = A[i];
            NRez++;
            i++;
        }
        // daca elementul din A are poz 
        // diferita si e dupa cel din B
        else if (A[i].x > B[j].x || (A[i].x == B[j].x && A[i].y > B[j].y)) {
            Rez[NRez] = B[j];
            NRez++;
            j++;
        }
        // daca elementul din A are a
        // ceeasi pozitie cu cel din B
        else {
            int suma = A[i].valoare + B[j].valoare;
            if (suma != 0) {
                Rez[NRez] = {A[i].x, A[i].y, suma};
                NRez++;
            }
            i++;
            j++;
        }
    }

    // elementele ramase
    while (i < N1) {

        Rez[NRez] = A[i];
        NRez++;
        i++;
    }
    while (j < N2) {
        Rez[NRez] = B[j];
        NRez++;
        j++;
    }

    fout << NRez << '\n';
    for (int k = 0; k < NRez; k++) {
        fout << Rez[k].x << ' ' << Rez[k].y << ' ' << Rez[k].valoare << '\n';
    }

    delete[] A;
    delete[] B;
    delete[] Rez;

    return 0;
}
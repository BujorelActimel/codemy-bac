// Se dau n perechi de numere naturale.
// a. Să se determine câte din aceste perechi sunt formate din numere de aceeași paritate.
// b. Să se afișeze perechile care sunt formate din numere cu proprietatea că unul dintre acestea este
// oglinditul celuilalt.
// c. Să se afișeze perechile ordonate crescător după suma numerelor care formează respectivele perechi.
// 3 x 3p
// Indiferent de modalitatea de rezolvare aleasă, pentru memorarea datelor se va utiliza tipul struct.
// Toate cerințele vor fi rezolvate într-un singur program.

#include <iostream>

using namespace std;

struct Pereche {
    int first, second;
};

int oglindit(int nr) {
    int rez = 0;
    while (nr != 0) {
        rez = rez * 10 + nr % 10;
        nr /= 10;
    }
    return rez;
}

int main() {
    int n;
    cin >> n;

    Pereche perechi[n];

    for (int i = 0; i < n; i++) {
        cin >> perechi[i].first >> perechi[i].second;
    }

    // a)
    int contor = 0;
    for (int i = 0; i < n; i++) {
        if (perechi[i].first % 2 == perechi[i].second % 2) {
            contor++;
        }
    }
    cout << "Raspuns A: " << contor << "\n";

    // b)
    cout << "Perechi pentru B: \n";
    for (int i = 0; i < n; i++) {
        if (oglindit(perechi[i].first) == perechi[i].second) {
            cout << perechi[i].first << ' ' << perechi[i].second << '\n';
        }
    }

    // c)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (perechi[i].first+perechi[i].second > perechi[j].first+perechi[j].second) {
                swap(perechi[i], perechi[j]);
            }
        }
    }
    
    cout << "Perechile sortate: \n";
    for (int i = 0; i < n; i++) {
        cout << perechi[i].first << ' ' << perechi[i].second << '\n';
    }

    return 0;
}
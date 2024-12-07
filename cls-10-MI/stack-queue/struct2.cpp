// Se dau n fracții sub forma numărator-numitor.
// a. Să se determine câte din aceste fracții sunt supraunitare.
// b. Să se afișeze fracțiile egale cu o fracție dată.
// c. Să se afișeze fracțiile ordonate crescător.
// 3 x 3p
// Indiferent de modalitatea de rezolvare aleasă, pentru memorarea datelor se va utiliza tipul struct.
// Toate cerințele vor fi rezolvate într-un singur program.

#include <iostream>
using namespace std;

struct Fractie {
    int numarator, numitor;
};

bool egale(Fractie fr1, Fractie fr2) {
    return fr1.numitor * fr2.numarator == fr1.numarator * fr2.numitor;
}

int main() {
    int n;
    cin >> n;

    Fractie fractii[n];

    for (int i = 0; i < n; i++) {
        cin >> fractii[i].numarator >> fractii[i].numitor;
    }

    // a)
    int contor = 0;
    for (int i = 0; i < n; i++) {
        if (fractii[i].numarator > fractii[i].numitor) {
            contor++;
        }
    }
    cout << "Fractii supraunitare: " << contor << "\n\n";

    // b)
    Fractie fractieNoua;
    cin >> fractieNoua.numarator >> fractieNoua.numitor;
    cout << "Fractiile egale sunt: \n";
    for (int i = 0; i < n; i++) {
        if (egale(fractieNoua, fractii[i])) {
            cout << fractii[i].numarator << '/' << fractii[i].numitor << '\n';
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            float rez1 = float(fractii[i].numarator) / float(fractii[i].numitor);
            float rez2 = float(fractii[j].numarator) / float(fractii[j].numitor);
            if (rez1 > rez2) {
                swap(fractii[i], fractii[j]);
            }
        }
    }

    cout << "\nFractiile sortate: \n";
    for (int i = 0; i < n; i++) {
        cout << fractii[i].numarator << '/' << fractii[i].numitor << '\n';
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

struct Elev {
    int varsta;
    char nume[30];
    float medie;
};

int main() {
    vector<Elev> elevi;

    while (true) {
        cout << "Aplicatie de gestiune a elevilor\n";
        cout << "Optiuni:\n1-adauga elev\n2-vezi toti elevii\n";

        int option;
        cin >> option;

        if (option == 1) {
            int varsta_elev;
            cout << "Varsta elevului: ";
            cin >> varsta_elev;

            cout << "\nNumele elevului: ";
            char nume_elev[30];
            cin >> nume_elev;
            // cin.get();

            cout << "\nMedia elevului: ";
            float medie_elev;
            cin >> medie_elev;

            Elev elev_nou;
            strcpy(elev_nou.nume, nume_elev);
            elev_nou.varsta = varsta_elev;
            elev_nou.medie = medie_elev;

            elevi.push_back(elev_nou);
            cout << '\n';
        }
        else if (option == 2) {
            for (int i = 0; i < elevi.size(); i++) {
                cout << elevi[i].nume << ' ' << elevi[i].varsta << ' ' << elevi[i].medie << '\n';
            }
        }
        else {
            cout << "Optiune invalida\n";
        }
    }

    return 0;
}
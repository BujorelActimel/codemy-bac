//masina 
// marca
// kilometraj
// nr inmatriculare

#include <iostream>
#include <string>

using namespace std;

struct masina {
    string marca;
    int kilometraj;
    string nr_inmatriculare;
    int nr_calatorii;

    // constructor
    masina(string m, int k, string nr) {
        marca = m;
        kilometraj = k;
        nr_inmatriculare = nr;
        nr_calatorii = 0;
    }

    // metode
    void afiseaza() {
        cout << marca << " are " << kilometraj << " km si are nr de inmtr: " << nr_inmatriculare << '\n';
    }

    void calatoreste(int distanta) {
        kilometraj += distanta;
        nr_calatorii++;
    }
};

int main() {
    masina m1("Audi", 200000, "BV 18 AEI");

    m1.afiseaza();

    m1.calatoreste(30000);

    m1.afiseaza();

    return 0;
}

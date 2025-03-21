#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

struct interval {
    int oraInceput;
    int oraFinal;
};

bool comparaOraFinal(const interval& a, const interval& b) {
    return a.oraFinal < b.oraFinal;
}

int main() {
    ifstream fin("spectacole.in");

    int n;
    fin >> n;

    interval spectacole[n];

    for (int i = 0; i < n; i++) {
        fin >> spectacole[i].oraInceput >> spectacole[i].oraFinal;
    }
    fin.close();

    sort(spectacole, spectacole+n, comparaOraFinal);

    int nrSpectacolePosibile = 0;
    int ora = 0;

    for (int i = 0; i < n; i++) {
        if (spectacole[i].oraInceput >= ora) {
            ora = spectacole[i].oraFinal;
            nrSpectacolePosibile++;
        }
    }

    ofstream fout("spectacole.out");
    fout << nrSpectacolePosibile << '\n';
    fout.close();

    return 0;
}
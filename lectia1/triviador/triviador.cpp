#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream fin("triviador.in");
    ofstream fout("triviador.out");

    int n;
    fin >> n;

    int punctaj1 = 0, punctaj2 = 0;

    for (int i = 0; i < n; i++) {
        int copil1, copil2, copil3;
        fin >> copil1 >> copil2 >> copil3;

        int scor_echipa = copil1 + copil2 + copil3;

        if (scor_echipa > punctaj1) {
            punctaj2 = punctaj1;
            punctaj1 = scor_echipa;
        }
        if (scor_echipa > punctaj2 && scor_echipa != punctaj1) {
            punctaj2 = scor_echipa;
        }
    }

    if (punctaj2 == 0) {
        fout << "TOTI SUNT CASTIGATORI\n";
    }
    else {
        fout << punctaj1 << ' ' << punctaj2 << '\n';
    }

    return 0;
}
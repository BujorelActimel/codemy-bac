#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("biblioteca.txt");

    int anMin=2023, anMax=1, nrMax=1, nrMin=1;
    int cod;

    while (fin >> cod) {
        int an = cod / 100000;

        if (an > anMax) {
            anMax = an;
            nrMax = 1;
        }
        else if (an == anMax) {
            nrMax++;
        }

        if (an < anMin) {
            anMin = an;
            nrMin = 1;
        }
        else if (an == anMin) {
            nrMin++;
        }
    }

    cout << nrMax << ' ' << nrMin << '\n';

    return 0;
}
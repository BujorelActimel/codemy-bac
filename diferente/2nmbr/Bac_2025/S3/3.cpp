#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("bac.txt");

    int an;
    fin >> an;

    int cod1, cod2;
    int raspuns1 = -1, raspuns2 = -1;

    fin >> cod1;
    while (fin >> cod2) {
        if (cod1 % 10000 == cod2 % 10000 && cod1 % 10000 == an) {
            raspuns1 = cod1, raspuns2 = cod2;
        }
        cod1 = cod2;
    }

    if (raspuns1 != -1 && raspuns2 != -1) {
        cout << raspuns1 / 10000 << ' ' << raspuns2 / 10000 << '\n';
    }
    else {
        cout << "nu exista\n";
    }
    return 0;
}
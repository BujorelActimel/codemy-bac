#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("bac.txt");

    int an;
    fin >> an;

    int cod;
    int idFinal = -1;
    while (fin >> cod) {
        if (cod % 10000 == an) {
            idFinal = cod / 10000;
        }
    }

    if (idFinal == -1) {
        cout << "nu exista\n";
    }
    else {
        cout << idFinal << '\n';
    }

    return 0;
}
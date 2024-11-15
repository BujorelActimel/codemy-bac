#include <iostream>

using namespace std;

int main() {
    int pret;
    char tip;

    cin >> tip >> pret;

    if (tip == 'N') {
        cout << "ciocolata neagra\n";
    }
    else if (tip == 'L') {
        cout << "cicolata cu lapte\n";
    }
    else {
        cout << "Caracter invalid\n";
        return 0;
    }

    if (pret > 10) {
        cout << "scumpa\n";
    }
    else {
        cout << "ieftina\n";
    }
}
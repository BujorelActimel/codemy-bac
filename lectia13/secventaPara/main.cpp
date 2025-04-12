#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("secventaPara.in");
    ofstream fout("secventaPara.out");

    int lungime_curenta = 0, lungime_maxima = 0, raspuns = 1;

    int nr;
    while (fin >> nr) {
        if (nr % 2 == 0) {
            lungime_curenta++;
        }
        else {
            if (lungime_curenta > lungime_maxima) {
                lungime_maxima = lungime_curenta;
                raspuns = 1;
                lungime_curenta = 0;
            } 
            else if (lungime_curenta == lungime_maxima) {
                raspuns++;
                lungime_curenta = 0;
            }
        }
    }

    if (lungime_curenta > lungime_maxima) {
        lungime_maxima = lungime_curenta;
        raspuns = 1;
    } 
    else if (lungime_curenta == lungime_maxima) {
        raspuns++;
    }

    fout << raspuns;

    return 0;
}

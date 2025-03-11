#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream fin("bac.txt");

    int anul_cautat;
    fin >> anul_cautat;

    int rez1 = -1, rez2 = -1;
    int primul_cod, al_doilea_cod;

    fin >> primul_cod;
    while (fin >> al_doilea_cod) {
        int an_primul = primul_cod % 10000;
        int an_al_doilea = al_doilea_cod % 10000;

        if (an_primul == anul_cautat && an_al_doilea == anul_cautat) {
            rez1 = primul_cod / 10000;
            rez2 = al_doilea_cod / 10000;
        }

        primul_cod = al_doilea_cod;
    }

    if (rez1 != -1 && rez2 != -1) {
        cout << rez1 << ' ' << rez2 << '\n';
    }
    else {
        cout << "nu exista\n";
    }
}
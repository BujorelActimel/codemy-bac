#include <bits/stdc++.h>

using namespace std;

const int ADUNARE = 1;
const int SCADERE = 2;
const int INMULTIRE = 3;

const char operatii[] = "+-*";

int toInt(char* numar) {
    int rezultat = 0;

    for (int i = 0; i < strlen(numar); i++) {
        int valCaracter = numar[i] - '0';
        rezultat = rezultat * 10 + valCaracter;
    }

    return rezultat;
}

int main() {
    ifstream fin("sir_eval.in");
    ofstream fout("sir_eval.out");

    char expresie[21];
    fin >> expresie;

    char* numeVariabila = strtok(expresie, "=");

    fout << numeVariabila << "=";

    char* calcul = strtok(NULL, "");
    
    int operatie = ADUNARE;
    if (strchr(calcul, '*') != NULL) {
        operatie = INMULTIRE;
    }
    if (strchr(calcul, '-') != NULL) {
        operatie = SCADERE;
    }

    char* nr1 = strtok(calcul, operatii);
    char* nr2 = strtok(NULL, "");

    int valNr1 = toInt(nr1);
    int valNr2 = toInt(nr2);

    if (operatie == ADUNARE) {
        fout << valNr1+valNr2;
    }
    else if (operatie == SCADERE) {
        fout << valNr1-valNr2;
    }
    else if (operatie == INMULTIRE) {
        fout << valNr1*valNr2;
    }

    return 0;
}

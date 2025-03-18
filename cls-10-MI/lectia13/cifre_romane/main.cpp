// #include <iostream>
// #include <fstream>
// #include <cstring>
#include <bits/stdc++.h>

using namespace std;

// fiecare caracter poate aparea de maxim 3 ori
// sunt 7 caractere posibile (I, V, X, L, C, D, M)
// deci 3 * 7 + 1(\0) = 22
const int MAX_CARACTERE = 22;
const char* INPUT = "cifre_romane1.in";
const char* OUTPUT = "cifre_romane1.out";

bool numarValid(char numar[]);
int val(char caracter);
void printToFile(const char* mesaj);

int main() {
    char numarRoman[MAX_CARACTERE];

    ifstream in(INPUT);
    in >> numarRoman;
    in.close();

    if (!numarValid(numarRoman)) {
        printToFile("Numar invalid");
        return 0;
    }

    int numarArab = 0;
    int valPrecedenta = val(numarRoman[0]);

    for (int i = 1; i < strlen(numarRoman); i++) {
        int valCurenta = val(numarRoman[i]);
        if (valPrecedenta >= valCurenta) {
            numarArab += valPrecedenta;
        }
        else {
            numarArab -= valPrecedenta;
        }
        valPrecedenta = valCurenta;
    }

    numarArab += valPrecedenta;

    printToFile(to_string(numarArab).c_str());

    return 0;
}

void printToFile(const char* mesaj) {
    ofstream out(OUTPUT);
    out << mesaj << "\n";
    out.close();
}

int val(char caracter) {
    switch(caracter) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}

int count(char numar[], char target) {
    int count = 0;
    for (int i = 0; i < strlen(numar); i++) {
        if (numar[i] == target) {
            count++;
        }
    }
    return count;
}

bool numarValid(char numar[]) {
    int n = strlen(numar);
    for (int i = 0; i < n; i++) {
        if (!strchr("IVXLCDM", numar[i])) {
            return false;
        }
    }

    if (count(numar, 'V') > 1 || count(numar, 'L') > 1 || count(numar, 'D') > 1) {
        return false;
    }

    for (int i = 0; i < n-1; ) {
        int repeatingSeq = 1;
        int j = i+1;
        while (j < n && numar[i] == numar[j]) {
            repeatingSeq++;
            j++;
        }
        if (repeatingSeq > 3) {
            return false;
        }
        i = j;
    }

    for (int i = 0; i < n-2; i++) {
        if (numar[i] == numar[i+1] && val(numar[i]) < val(numar[i+2])) {
            return false;
        }
    }

    for (int i = 0; i < n-1; i++) {
        int num1 = val(numar[i]), num2 = val(numar[i+1]);
        if (num1 < num2) {
            if (num1 != 1 && num1 != 10 && num1 != 100) {
                return false;
            }
            if (num1 == 1 && (num2 != 5 && num2 != 10)) {
                return false;
            }
            if (num1 == 10 && (num2 != 50 && num2 != 100)) {
                return false;
            }
            if (num1 == 100 && (num2 != 500 && num2 != 1000)) {
                return false;
            }
        }
    }

    return true;
}

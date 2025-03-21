#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream fin("bacon.in");
    ofstream fout("bacon.out");

    int cerinta;

    fin >> cerinta;

    if (cerinta == 1) {
        char mesaj[10001];
        fin >> mesaj;
        for (int i = 0; i < strlen(mesaj); i++) {
            int cod = mesaj[i]-'A';
            char baza2[6] = "AAAAA";

            int k = 4;

            while (cod) {
                int rest = cod % 2;
                baza2[k] += rest;
                k--;
                cod /= 2;
            }

            fout << baza2;
        }
    }
    else {
        char mesaj[10001];
        fin >> mesaj;
        for (int i = 0; i < strlen(mesaj); i += 5) {
            int numar = 0;
            int putere = 1;
            for (int j = i+4; j >= i; j--) {
                if (mesaj[j] == 'B') {
                    numar += putere;
                }
                putere *= 2;
            }
            fout << char('A' + numar);
        }
        fout << '\n';
    }
}

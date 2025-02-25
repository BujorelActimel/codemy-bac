#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream fin("bacon.in");
    ofstream fout("bacon.out");

    int operatie;
    fin >> operatie;
    fin.ignore(numeric_limits<streamsize>::max(), '\n');

    char text[10001];
    fin.getline(text, 10001);

    if (operatie == 1) { // codificam
        for (int i = 0; i < strlen(text); i++) {
            int numar = text[i] - 'A';
            int binar[5] = {0};

            int poz = 4;

            while (numar) {
                binar[poz] = numar % 2;
                poz--;
                numar /= 2;
            }

            for (int i = 0; i < 5; i++) {
                if (binar[i] == 0) {
                    fout << 'A';
                }
                else {
                    fout << 'B';
                }
            }
        }
    }
    else { // decodificam
        for (int j = 0; j <= strlen(text)-5; j += 5) {
            int putere2 = 1;
            int numar = 0;

            char s[6] = {0};
            strncpy(s, text+j, 5);

            for (int i = strlen(s)-1; i >= 0; i--) {
                numar += putere2 * (s[i]-'A');
                putere2 *= 2;
            }

            fout << char('A' + numar);
        }
    }

    return 0;
}

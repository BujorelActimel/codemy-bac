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
        // TEMA
    }

    return 0;
}

// 13 : 2 = 6, rest 1
// 6 : 2 = 3, rest 0
// 3 : 2 = 1 rest 1
// 1 : 2 = 0, rest 1
// 0 stop

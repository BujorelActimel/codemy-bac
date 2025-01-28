#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("prosirz.in");
    ofstream fout("prosirz.out");

    char s[201];
    fin.getline(s, 201);

    // a)
    int contor = 0;
    char vocale[] = "aeiou";
    for (int i = 0; i < strlen(s); i++) {
        if (strchr(vocale, s[i])) {
            contor++;
        }
    }

    fout << contor << '\n';

    // b)
    char sc[201];
    strcpy(sc, s);

    for (int i = 0; i < strlen(sc); i++) {
        if (sc[i] == ' ' && sc[i-1] != ' ') {
            sc[i-1] = 'Z';
        }
    }

    if (sc[strlen(sc)-1] != ' ') {
        sc[strlen(sc)-1] = 'Z';
    }

    fout << sc << '\n';

    // c)
    char cuvinte[201][101];
    int k = 0;

    char* cuvant = strtok(s, " ");

    while (cuvant != NULL) {
        strcpy(cuvinte[k], cuvant);
        k++;
        cuvant = strtok(NULL, " ");
    }

    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (strcmp(cuvinte[i], cuvinte[j]) < 0) {
                swap(cuvinte[i], cuvinte[j]);
            }
        }
    }

    for (int i = 0; i < k; i++) {
        fout << cuvinte[i] << ' ';
    }

    fin.close();
    fout.close();

    return 0;
}

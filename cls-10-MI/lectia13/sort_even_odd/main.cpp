// Se da un sir de caractere. Afișați cuvintele  
// aflate pe poziții pare și cuvintele aflate pe poziții impare. 
// Cele două șiruri vor fi afisate pe cate o linie.
// Sirurile vor fi sortate dupa lungimea cuvintelor, daca au lungime egala, alfabetic.

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char sir[100];
    cin.getline(sir, 100);

    char cuvinte[100][100];

    char* cuv = strtok(sir, " ");
    int poz = 0;

    while (cuv) {
        strcpy(cuvinte[poz], cuv);
        poz++;

        cuv = strtok(NULL, " ");
    }

    cout << "Inainte de Sortare:\n";
    for (int i = 0; i < poz; i += 2) {
        cout << cuvinte[i] << '\n';
    }

    for (int i = 0; i < poz-1; i += 2) {
        for (int j = i+2; j < poz; j += 2) {
            if (strlen(cuvinte[i]) > strlen(cuvinte[j])) {
                swap(cuvinte[i], cuvinte[j]);
            }
            else if (strlen(cuvinte[i]) == strlen(cuvinte[j])) {
                if (strcmp(cuvinte[i], cuvinte[j]) > 0) {
                    swap(cuvinte[i], cuvinte[j]);
                }
            }
        }
    }

    cout << "\nDupa Sortare:\n";
    for (int i = 0; i < poz; i += 2) {
        cout << cuvinte[i] << '\n';
    }

    cout << "\nInainte de Sortare:\n";
    for (int i = 1; i < poz; i += 2) {
        cout << cuvinte[i] << '\n';
    }

    for (int i = 1; i < poz-1; i += 2) {
        for (int j = i+2; j < poz; j += 2) {
            if (strlen(cuvinte[i]) > strlen(cuvinte[j])) {
                swap(cuvinte[i], cuvinte[j]);
            }
            else if (strlen(cuvinte[i]) == strlen(cuvinte[j])) {
                if (strcmp(cuvinte[i], cuvinte[j]) > 0) {
                    swap(cuvinte[i], cuvinte[j]);
                }
            }
        }
    }

    cout << "\nDupa Sortare:\n";
    for (int i = 1; i < poz; i += 2) {
        cout << cuvinte[i] << '\n';
    }

    return 0;
}
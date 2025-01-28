#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[101];
    cin.getline(s, 101);

    char copie_s[101];
    strcpy(copie_s, s);

    char cuvinte[101][101];
    int k = 0;

    char* cuvant = strtok(copie_s, " ");
    while (cuvant != NULL) {
        if (strlen(cuvant) % 2 == 1) {
            strcpy(cuvinte[k], cuvant);
            k++;
        }
        cuvant = strtok(NULL, " ");
    }

    for (int i = 0; i < k; i++) {
        char descentratul[102];
        strcpy(descentratul, cuvinte[i]);
        strcpy(descentratul + strlen(descentratul)/2+1, descentratul + strlen(descentratul)/2);
        if (strstr(s, descentratul)) {
            cout << "DA\n";
            return 0;
        }
    }

    cout << "NU\n";

    return 0;
}

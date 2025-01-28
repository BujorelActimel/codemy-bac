#include <iostream>
#include <cstring>

using namespace std;

int max(int nr1, int nr2) {
    if (nr1 > nr2) {
        return nr1;
    } else {
        return nr2;
    }
}


int main() {

    char s[256];
    cin.getline(s, 256);

    char copie[256];
    strcpy(copie, s);

    int contor = 0, Max = 0;

    char* cuvant = strtok(s, " ");

    while (cuvant != NULL) {
        if (strlen(cuvant) == 3) {
            contor++;
        }
        Max = max(Max, strlen(cuvant));
        cuvant = strtok(NULL, " ");
    }

    cout << contor << '\n';

    cuvant = strtok(copie, " ");

    while (cuvant != NULL) {
        if (strchr("aeiouAEIOU", cuvant[0]) != NULL && strchr("aeiouAEIOU", cuvant[strlen(cuvant)-1]) != NULL) {
            cout << cuvant << '\n';
        }
        cuvant = strtok(NULL, " ");
    }

    cout << Max << '\n';

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int countVowels(char cuv[]) {
    char vocale[] = "aeiou";
    int contor = 0;

    for (int i = 0; i < strlen(cuv); i++) {
        if (strchr(vocale, cuv[i])) {
            contor++;
        }
    }

    return contor;
}

bool asemenea(char cuv1[], char cuv2[]) {
    return (strcmp(cuv1, cuv2) != 0) && (countVowels(cuv1) == countVowels(cuv2));
}

int main() {
    int n;
    cin >> n;

    char cuvinte[n][21];

    cin.get();

    for (int i = 0; i < n; i++) {
        char cuvant[21];
        cin.getline(cuvant, 21);
        strcpy(cuvinte[i], cuvant);
    }

    int afisari = 0;

    for (int i = 0; i < n-1; i++) {
        if (asemenea(cuvinte[i], cuvinte[n-1])) {
            cout << cuvinte[i] << ' ';
            afisari++;
        }
    }

    if (!afisari) {
        cout << "nu exista\n";
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

// "adaaacaada"
//  ^

int count(char s[], char c) {
    int contor = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == c) {
            contor++;
        }
    }
    return contor;
}

int main() {
    char s[101];
    cin.getline(s, 101);
    
    char caracter;
    cin >> caracter;

    char cuvinte[101][101];
    int k = 0;

    char* cuv = strtok(s, " ");
    while (cuv) {
        if (count(cuv, caracter) >= 2) {
            // cout << cuv << '\n';
            strcpy(cuvinte[k], cuv);
            k++;
        }
        cuv = strtok(NULL, " ");
    }

    for (int i = 0; i < k-1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (count(cuvinte[i], caracter) < count(cuvinte[j], caracter)) {
                swap(cuvinte[i], cuvinte[j]);
            }
        }
    }

    for (int i = 0; i < k; i++) {
        cout << cuvinte[i] << '\n';
    }

    return 0;
}



// acasa baba rosu par atata carton acaparare

// 0 a c a s a \0
// 1 b a b a \0
// 2 a t a t a \0
// 3 a c a p a r a r e \0

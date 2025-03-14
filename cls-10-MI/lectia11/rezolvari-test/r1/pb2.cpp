#include <bits/stdc++.h>

using namespace std;

bool distinct(char s[]) {
    int frecv[27] = {0};
    for (int i = 0; i < strlen(s); i++) {
        int pozitie = s[i] - 'a';
        frecv[pozitie]++;
        if (frecv[pozitie] > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    char s[101];
    cin.getline(s, 101);

    char cuvinte[101][101];
    int k = 0;

    char* cuv = strtok(s, " ");
    while (cuv) {
        if (distinct(cuv)) {
            strcpy(cuvinte[k], cuv);
            k++;
        }
        cuv = strtok(NULL, " ");
    }

    for (int i = 0; i < k-1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (strlen(cuvinte[i]) > strlen(cuvinte[j])) {
                swap(cuvinte[i], cuvinte[j]);
            }
        }
    }

    for (int i = 0; i < k; i++) {
        cout << cuvinte[i] << '\n';
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;


void sorteaza(char s[]) {
    for (int i = 0; i < strlen(s) - 1; i++) {
        for (int j = i + 1; j < strlen(s); j++) {
            if (s[i] > s[j]) {
                swap(s[i], s[j]);
            }
        }
    }
}

int main() {
    char s[101];
    cin.getline(s, 101);

    // a)
    bool eNumar = true;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            eNumar = false;
            break;
        }
    }

    if (eNumar) {
        cout << "a. => da\n";
    }
    else {
        cout << "a. => nu\n";
    }

    // b)
    bool eMax = true;
    for (int i = 0; i < strlen(s)-1; i++) {
        if (s[i] < s[i+1]) {
            eMax = false;
            break;
        }
    }
    if (eMax) {
        cout << "b. => da\n";
    }
    else {
        cout << "b. => nu\n";
    }

    // c)
    int k;
    cin >> k;

    char subSir[k+1];
    for (int i = 0; i < strlen(s)-k+1; i++) {
        strncpy(subSir, s+i, k);
        subSir[k] = '\0';
        cout << subSir << '\n';
    }

    // d)
    char alt_s[101];
    cin.get();
    cin.getline(alt_s, 101);

    sorteaza(s);
    sorteaza(alt_s);

    if (strcmp(s, alt_s) == 0) {
        cout << "d. => da\n";
    }
    else {
        cout << "d. => nu\n";
    }

    return 0;
}

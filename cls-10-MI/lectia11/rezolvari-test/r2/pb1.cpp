#include <bits/stdc++.h>

using namespace std;

// 0 0 0 0 0 0 0 0 0 0 0  0 
// 0 1 2 3 4 5 6 7 8 9 10 11 ... 
// a b c d e f g h i j k  l

// "aia"
//  ^

// 'b' -> 1
// 'a' -> 0
// 'd' -> 3

// 'd' - 'a' = 93 - 90 = 3
// 'a' - 'a' = 0
// 'b' = 'a' = 1

// "bascb"

bool palindrom(char s[], int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void afiseaza(char s[], int i, int j) {
    for (int k = i; k <= j; k++) {
        cout << s[k];
    }
    cout << '\n';
}

int main() {
    char s[101];
    cin.getline(s, 101);


    // a)
    bool eCuvant = true;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            eCuvant = false;
            break;
        }
    }

    if (eCuvant) {
        cout << "a. => da\n";
    }
    else {
        cout << "a. => nu\n";
    }

    // b)
    if (eCuvant) {
        int frecv[27] = {0};

        int distincte = true;

        for (int i = 0; i < strlen(s); i++) {
            int pozitie = s[i] - 'a';
            frecv[pozitie]++;
            if (frecv[pozitie] > 1) {
                distincte = false;
                break;
            }
        }

        if (distincte) {
            cout << "b. => da\n";
        }
        else {
            cout << "b. => nu\n";
        }
    }
    else {
        cout << "b. => nu\n";
    }

    // c)
    cout << "c. =>\n";
    for (int i = 0; i < strlen(s); i++) {
        cout << s + i << '\n';
    }

    // d)
    cout << "d. =>\n";
    for (int i = 0; i < strlen(s) - 1; i++) {
        for (int j = i + 1; j < strlen(s); j++) {
            if (palindrom(s, i, j)) {
                afiseaza(s, i, j);
            }
        }
    }

    return 0;
}

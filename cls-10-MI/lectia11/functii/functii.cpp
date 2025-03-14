#include <iostream>
#include <cstring>
using namespace std;


void Trim(char s[]) {
    int i;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] != ' ') {
            break;
        }
    }
    strcpy(s, s+i);

    for (i = strlen(s)-1; i >= 0; i--) {
        if (s[i] != ' ') {
            break;
        }
    }
    s[i+1] = '\0';
}

void v1(int a) {
    a = 10;
}

void v2(int &a) {
    a = 10;
}

void sum_cif(int numar, int &rezultat) {
    rezultat = 0;
    while (numar) {
        rezultat += numar % 10;
        numar /= 10;
    }
}

int main() {
    // char s[] = "     ana   are   mere        ";

    // cout << s << '\n';
    // Trim(s);
    // cout << s << '\n';

    // int a = 30;
    // cout << a << '\n'; // 30
    // v1(a); -> v1(30);
    // cout << a << '\n'; // 30
    // v2(a); -> v2(a)
    // cout << a << '\n'; // 10

    int nr;

    sum_cif(1234, nr);

    cout << nr << '\n';


    return 0;
}
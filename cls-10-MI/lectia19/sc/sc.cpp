#include <iostream>
#include <cstring>
using namespace std;

int SC(char s[]) {
    if (s[0] == '\0') {
        return 0;
    }

    int nr = 0;
    if (s[0] >= '0' && s[0] <= '9') {
        nr = s[0] - '0';
    }
    return nr + SC(s+1);
}

int main() {
    char s[] = "Ana are 15 mere si 185 de pere.";

    cout << SC(s) << '\n';
    return 0;
}
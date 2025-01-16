#include <iostream>
#include <cstring>

using namespace std;

// nu este spatiu, nu este litera mare si nu este vocala
bool bun(char caracter) {
    char vocale[] = "aeiou";

    if (caracter == ' ') {
        return false;
    }
    if (caracter >= 'A' && caracter <= 'Z') {
        return false;
    }
    if (strchr(vocale, caracter)) {
        return false;
    }
    return true;
}

int main() {
    char sir[201];
    cin.getline(sir, 201);

    int suma = 0;
    int contor = 0;

    for (int i = 0; i < strlen(sir); i++) {
        if(bun(sir[i])) {
            suma += int(sir[i]);
            contor++;
        }
    }

    cout << char(suma/contor) << '\n';

    return 0;
}

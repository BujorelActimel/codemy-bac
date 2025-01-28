#include <iostream>
#include <cstring>

using namespace std;


int main() {
    char s[256];
    char vocale[] = "aeiou";

    cin.getline(s, 256);

    char* cuv = strtok(s, " ");

    while (cuv != NULL) {
        bool doar_vocale = true;
        for (int i = 0; i < strlen(cuv); i++) {
            if (strchr(vocale, cuv[i]) == NULL) {
                doar_vocale = false;
            }
        }
        if (doar_vocale) {
            cout << cuv << '\n';
        }
        cuv = strtok(NULL, " ");
    }

    return 0;
}
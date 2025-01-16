#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char sir[256];
    cin.getline(sir, 256);

    char vocale[] = "aeiou";
    int i = 0;
    
    int Max = 0;
    int sir_curent = 0;
    char* rezultat_curent;
    char* rezultat;

    while (i <= strlen(sir)) {
        if (strchr(vocale, sir[i]) == NULL) {
            if (sir_curent == 0) {
                rezultat_curent = sir+i;
            }
            sir_curent++;
        }
        else {
            if (sir_curent >= Max) {
                Max = sir_curent;
                rezultat = rezultat_curent;
            }
            sir_curent = 0;
        }
        i++;
    }

    rezultat[Max] = '\0';
    cout << rezultat << '\n';

    return 0;
}

// "hldj\0"

// sir = 0x123

// sir_curent = 0x130
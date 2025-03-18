#include <iostream>
#include <cstring>

using namespace std;

// "doi\0prieteni\0analizeaza un capac aerisirea   e ok   radar e radar"
//               ^

// vector = [
//     'd', 'o', 'i', 
//     'p', 'r', 'i', eteni, 
//     "analizeaza", 
//     "un", 
//     "capac", 
// ]

// string cuvinte[10];

bool palindrom(char s[]) {
    int i = 0, j = strlen(s)-1;

    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    // citirea datelor
    char sir[256];
    cin.getline(sir, 256);

    // impartirea in cuvinte (split)
    char cuvinte[100][100];

    char* cuv = strtok(sir, " ");
    int k = 0;

    while (cuv != NULL) {
        // prelucrez cuvant
        if (palindrom(cuv)) {
            strcpy(cuvinte[k], cuv);
            k++;
        }

        cuv = strtok(NULL, " ");
    }

    if (k == 0) {
        cout << "nu exista\n";
        return 0;
    }

    // sortarea
    for (int i = 0; i < k-1; i++) {
        for (int j = i+1; j < k; j++) {
            if (strcmp(cuvinte[i], cuvinte[j]) > 0) {
                swap(cuvinte[i], cuvinte[j]);
            }
        }
    }

    int contor = 1;

    for (int i = 0; i < k-1; i++) {
        if (strcmp(cuvinte[i], cuvinte[i+1]) == 0) {
            contor++;
        } else {
            cout << cuvinte[i] << ' ' << contor << '\n';
            contor = 1;
        }
    }
    cout << cuvinte[k-1] << ' ' << contor << '\n';


    return 0;
}

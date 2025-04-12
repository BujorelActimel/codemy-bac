#include <iostream>
#include <cstring>

using namespace std;

void flip(char sir[]) {
    for (int i = 0; i < strlen(sir)/2; i++) {
        swap(sir[i], sir[strlen(sir)-i-1]);
    }
}

int main() {
    char text[101];
    cin.getline(text, 101);

    char rezultat[101];
    bool found = false;

    char* cuv = strtok(text, " ");
    while (cuv) {
        if (strlen(cuv) % 2 != 0) {
            char reverse[101];
            strcpy(reverse, cuv);
            flip(reverse);
            if (strcmp(cuv, reverse) != 0) {
                found = true;
            }
            strcat(rezultat, reverse);
            strcat(rezultat, " ");
        }
        else {
            strcat(rezultat, cuv);
            strcat(rezultat, " ");
        }

        cuv = strtok(NULL, " ");
    }

    strcpy(text, rezultat);

    if (!found) {
        cout << "nu exista\n";
    }
    else {
        cout << text << '\n';
    }

    return 0;
}

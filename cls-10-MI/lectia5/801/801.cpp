#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char sir[256];
    cin.getline(sir, 256);

    int i = 0;

    // Elimina spatiile de la inceput
    while (sir[i] == ' ') {
        i++;
    }

    strcpy(sir, sir + i);

    i = 0;
    int j = 0;
    bool in_word = false;

    while (sir[i] != '\0') {
        if (sir[i] != ' ') {
            sir[j++] = sir[i];
            in_word = true;
        } else if (in_word) {
            sir[j++] = ' ';
            in_word = false;
        }
        i++;
    }

    // Elimina spatiul suplimentar de la sfarsit, daca exista
    if (j > 0 && sir[j - 1] == ' ') {
        j--;
    }

    sir[j] = '\0';

    cout << sir << '\n';

    return 0;
}
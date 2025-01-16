#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char sir[256];
    cin.getline(sir, 256);

    int i = 0;

    while (sir[i] == ' ') {
        i++;
    }

    strcpy(sir, sir+i);

    i = 0;

    while (i < strlen(sir)) {
        while (sir[i] != ' ' && sir[i] != '\0') {
            i++;
        }
        int j = i+1;
        while (sir[j] == ' ') {
            j++;
        }
        if (sir[i] == ' ') {
            strcpy(sir + i + 1, sir + j);
        }
        i++;
    }

    cout << sir << '\n';

    return 0;
}

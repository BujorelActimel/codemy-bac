#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[101];
    cin.getline(s, 101);

    char copie_s[101];
    strcpy(copie_s, s);

    char* cuv = strtok(s, " ");

    int contor = 0;

    while (cuv != NULL) {
        if (strlen(cuv) % 2 == 0) {
            contor++;
        }
        cuv = strtok(NULL, " ");
    }

    if (contor == 0) {
        cout << "nu exista\n";
        return 0;
    }

    cuv = strtok(copie_s, " ");

    while (cuv != NULL) {
        if (strlen(cuv) % 2 == 0) {
            cout << "# ";
        }
        else {
            cout << cuv << ' ';
        }
        cuv = strtok(NULL, " ");
    }

    cout << '\n';

    return 0;
}

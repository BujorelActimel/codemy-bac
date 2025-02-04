#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[100];

    cin.getline(s, 100);

    int k = 0;

    int ultimul_spatiu = -1;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            for (int j = ultimul_spatiu + 1; j < i; j++) {
                cout << s[j];
            }
            cout << '\n';
            ultimul_spatiu = i;
        }
    }

    for (int j = ultimul_spatiu + 1; j < strlen(s); j++) {
        cout << s[j];
    }
    cout << '\n';

    return 0;
}

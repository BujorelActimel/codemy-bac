#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char text[101];
    cin.getline(text, 101);

    bool inside = false;

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == '<') {
            inside = true;
        }
        else if (text[i] == '>') {
            inside = false;
        }
        else {
            if (inside) {
                if (text[i] >= 'a' && text[i] <= 'z') {
                    int dif = 'a' - 'A';
                    text[i] -= dif;
                }
            }
        }
    }

    cout << text << '\n';

    return 0;
}

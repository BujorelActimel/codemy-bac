#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int p;
    char s[256];
    cin >> p;
    cin.get();
    cin.get(s, 256);

    for (int i = 0; i < strlen(s)-p+1; i++) {
        for (int j = 0; j < strlen(s); j++) {
            if (j < i || j >= i + p) {
                cout << s[j];
            }
        }
        cout << '\n';
    } 

    return 0;
}

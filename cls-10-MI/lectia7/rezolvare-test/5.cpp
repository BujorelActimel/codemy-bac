#include <iostream>
#include <cstring>

using namespace std;


int main() {
    char x[] = "absolvent";
    char s[] = "absolvent";

    for (int i = 0; i < strlen(s); i++) {
        cout << "strcmp("<<x<<", "<<s+i<<") = " << strcmp(x, s+i) << '\n';
        if (strcmp(x, s+i) < 0) {
            strcpy(x, s+i);
        }
    }

    cout << x << '\n';

    return 0;
}
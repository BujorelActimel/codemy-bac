#include <iostream>
#include <cstring>

using namespace std;
 
bool palindrom(char s[]) {
    int start = 0;
    int end = strlen(s)-1;
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char s[256];
    cin.getline(s, 256);

    char cuvinte[256][21];
    int k = 0;

    char* cuv = strtok(s, " ");
    while (cuv != NULL) {
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

    // sortare
    for (int i = 0; i < k-1; i++) {
        for (int j = i + 1; j < k; j++) {
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

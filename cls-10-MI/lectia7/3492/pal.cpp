#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

bool palindrom(char s[], int start, int end) {
    end--;
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
    ifstream fin("palpal.in");
    ofstream fout("palpal.out");

    char s[20001];
    int k;

    fin.getline(s, 20001);
    fin >> k;

    for (int i = 1; i <= k; i++) {
        int contor = 0;
        for (int j = 0; j < strlen(s)-i; j++) {
            if (palindrom(s, j, j+i)) {
                contor++;
            }
        }
        fout << contor << '\n';
    }

    return 0;
}

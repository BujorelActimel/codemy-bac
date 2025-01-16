#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char sir[256];
    cin.getline(sir, 256);

    int suma = 0;
    int nr_curent = 0;

    for (int i = 0; i < strlen(sir); i++) {
        if (sir[i] >= '0' && sir[i] <= '9') {
            int nr = sir[i] - '0';
            nr_curent = nr_curent * 10 + nr;
        }
        else {
            suma += nr_curent;
            nr_curent = 0;
        }
    }

    cout << suma << '\n';

    return 0;
}

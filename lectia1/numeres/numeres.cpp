#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, s;

    cin >> n >> s;
    int contor = 0;

    for (int numar = pow(10, n-1); numar < pow(10, n); numar++) {

        int suma = 0;

        int copie_numar = numar;

        while(copie_numar > 0) {
            suma += copie_numar % 10;
            copie_numar /= 10;
        }

        if (suma == s) {
            cout << numar << ' ';
            contor++;
        }
    }
    if (contor == 0) {
        cout << contor << '\n';
        return 0;
    }
    cout << '\n' << contor << '\n';
    return 0;
}
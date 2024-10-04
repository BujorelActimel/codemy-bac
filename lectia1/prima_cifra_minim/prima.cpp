#include <iostream>

using namespace std;

int prima_cifra(int numar) {
    int raspuns = numar;
    while (raspuns > 9) {
        raspuns /= 10;
    }
    return raspuns;
}

int main() {
    int n;
    cin >> n;
    int num, numar_cu_cifra_minima, cifra_minima = 10;
    for (int i = 0; i < n; i++) {
        cin >> num;

        int prima_cif = prima_cifra(num);

        if (prima_cif < cifra_minima) {
            cifra_minima = prima_cif;
            numar_cu_cifra_minima = num;
        }

        if (prima_cif == cifra_minima) {
            numar_cu_cifra_minima = max(numar_cu_cifra_minima, num);
        } 
    }
    cout << numar_cu_cifra_minima << '\n';
    return 0;
}
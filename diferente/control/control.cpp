#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");

    int suma;

    int n;
    fin >> n;

    do {
        suma = 0;
        while (n) {
            suma += n % 10;
            n /= 10;
        }
        n = suma;
    } while(suma > 9);


    fout << suma << '\n';

    fin.close();
    fout.close();
}
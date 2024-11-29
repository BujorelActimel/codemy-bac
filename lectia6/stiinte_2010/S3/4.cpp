#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ifstream fin("BAC.txt");

    int x, y;

    fin >> x;

    while (fin >> y) {
        if (x % 2 == 0 && x != y) {
            cout << x << ' ';
        }
        x = y;
    }

    if (y % 2 == 0) {
        cout << y;
    }

    cout << '\n';

    return 0;
}
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");
    int n;
    fin >> n;
    int d = 2;
    while (n > 1) {
        int p = 0;
        while (n % d == 0) {
            p++;
            n /= d;
        }
        if (p > 0) {
            fout << "factorul " << d << " la puterea " << p << '\n';
        }
        d++;
    }
    
    return 0;
}

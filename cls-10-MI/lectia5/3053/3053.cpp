#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    ifstream fin("evenoddxxl.in");
    ofstream fout("evenoddxxl.out");
    
    char numar[1001];

    fin >> numar;

    if ((numar[strlen(numar)-1] - '0') % 2 == 0) {
        fout << "Par\n";
    }
    else {
        fout << "Impar\n";
    }
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    char cod1='A', cod2='B';
    int nrLocuitori1=30000, nrLocuitori2=30000;
    int suprafata1=5000000, suprafata2=500000;



    if (nrLocuitori1/float(suprafata1) == nrLocuitori2/float(suprafata2)) {
        cout << "egale\n";
    }
    else if (nrLocuitori1/float(suprafata1) > nrLocuitori2/float(suprafata2)) {
        cout << cod1 << '\n';
    }
    else {
        cout << cod2 << '\n';
    }

    return 0;
}

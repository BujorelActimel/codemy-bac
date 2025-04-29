#include <iostream>

using namespace std;

// f(2507) -> 14;
// f(250) -> 7;
// f(25) -> 7;
// f(2) -> 2;

int sumcif(int n) {
    if (n < 10) { // cazul de baza
        return n;
    }
    return sumcif(n/10) + n%10; // pasul recursiv
}

int nr_cif_zero(int n) {
    if (n < 10) {
        if (n == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }

    if (n % 10 == 0) {
        return nr_cif_zero(n/10) + 1;
    }
    else {
        return nr_cif_zero(n/10);
    }

    // return nr_cif_zero(n/10) + (n % 10 == 0);

    // return (n % 10 == 0) ? nr_cif_zero(n/10) + 1 : nr_cif_zero(n/10);
}

int CifDiv3Rec(int n) {
    if (n < 10) {
        if (n % 3 == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }

    if (n % 10 % 3 == 0) {
        return CifDiv3Rec(n/10) + 1;
    }
    else {
        return CifDiv3Rec(n/10);
    }
}

int main() {
    cout << nr_cif_zero(2507) <<'\n';

    return 0;
}

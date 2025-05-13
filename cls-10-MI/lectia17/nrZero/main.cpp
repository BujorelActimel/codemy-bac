#include <iostream>

using namespace std;

int NrZero(int a[], int n) {
    int nr = 0;
    int mij = n / 2;

    if (a[mij] % 2 == 0 && a[mij] != 0) {
        int i = mij;
        while (i >= 1 && a[i] % 2 == 0) {
            if (a[i] == 0) {
                nr++;
            }
            i--;
        }
    }
    else if (a[mij] == 0) {
        int i = mij;
        while(i <= n && a[i] == 0) {
            nr++;
            i++;
        }
        i = mij;
        while(i >= 0 && a[i] == 0) {
            nr++;
            i--;
        }
    }
    else {
        int i = mij;
        while (i <= n && (a[i] % 2 != 0 || a[i] == 0)) {
            if (a[i] == 0) {
                nr++;
            }
            i++;
        }
    }

    return nr;
}



int main() {


    return 0;
}


// 7,0,2,6,6
//  ^  
//  ^
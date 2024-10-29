#include <iostream>
#include <fstream>
using namespace std;

int cauta_numar(int a[], int start, int finish, int x) {
    if (start > finish) {
        return -1;
    }
    int mid = (start + finish) / 2;
    if (x == a[mid]) {
        return mid;
    }
    else if (x > a[mid]) {
        return cauta_numar(a, mid + 1, finish, x);
    }
    else {
        return cauta_numar(a, start, mid - 1, x);
    }
}

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");
    int n, x;
    fin>>n;
    int a[n];
    for (int i=0; i<n; i++) {
        fin>>a[i];
    }
    fin>>x;
    // for (int i=0; i<n; i++){
    //     if (x==v[i]){
    //         fout<<i+1 << '\n';
    //         return 0;
    //     }
    // }
    fout << cauta_numar(a, 0, n - 1, x) + 1 << '\n';
    return 0;
}
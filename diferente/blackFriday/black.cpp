#include <iostream>
#include <fstream>

using namespace std;

int a = 1;

int main() {
    ifstream fin("blackfriday.in");
    ofstream fout("blackfriday.out");

    int n;
    fin >> n;
    int inainte[n], dupa[n];

    for (int i = 0; i < n; i++) {
        fin >> inainte[i];
    }

    for (int i = 0; i < n; i++) {
        fin >> dupa[i];   
    }

    int Max = 0;
    int raspuns = 1;

    for (int i = 0; i < n; i++) {
        int reducerea = 100 - (dupa[i] * 100 / inainte[i]);
        // cout << reducerea << '\n';
        if (reducerea > Max) {
            Max = reducerea;
            raspuns = i + 1;
        }
    }
    fout << raspuns;
}
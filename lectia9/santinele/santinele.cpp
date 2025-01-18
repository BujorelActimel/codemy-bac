#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

ifstream fin("santinele.in");
ofstream fout("santinele.out");

void solve1();
void solve2();

int main() {
    int cerinta;
    fin >> cerinta;

    if (cerinta == 1) {
        solve1();
    } else {
        solve2();
    }

    fin.close();
    fout.close();
    return 0;
}

void solve1() {
    int n, k;
    fin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    int Max = -1;
    bool continePrimul = false;

    for (int i = 0; i <= k; i++) {
        int lungimeCurenta = 1;
        if (i == 0) {
            continePrimul = true;
        }
        // stanga
        int j = i-1;
        while (j >= 0 && j >= i-k) {
            if (a[i] >= a[j]) {
                lungimeCurenta++;
                if (j == 0) {
                    continePrimul = true;
                }
            } else {
                break;
            }
            j--;
        }
        // dreapta
        j = i+1;
        while (j < n && j <= i+k) {
            if (a[i] >= a[j]) {
                lungimeCurenta++;
            } else {
                break;
            }
            j++;
        }

        if (continePrimul) {
            Max = max(Max, lungimeCurenta);
        }
        continePrimul = false;
    }

    fout << Max;
}

void solve2() {
    int n, k;
    fin >> n >> k;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        fin >> heights[i];
    }

    // Pentru fiecare poziție, calculăm de unde poate începe și până unde poate vedea o santinelă
    vector<int> maxEnd(n);
    vector<int> minStart(n);
    for (int i = 0; i < n; i++) {
        // Calculăm startul minim (mergem la stânga până găsim un vârf mai mare sau ajungem la k pași)
        int start = max(0, i-k);
        for (int j = i-1; j >= max(0, i-k); j--) {
            if (heights[j] > heights[i]) {
                start = j + 1;
                break;
            }
        }
        minStart[i] = start;

        // Calculăm sfârșitul maxim (mergem la dreapta până găsim un vârf mai mare sau ajungem la k pași)
        int end = min(n-1, i+k);
        for (int j = i+1; j <= min(n-1, i+k); j++) {
            if (heights[j] > heights[i]) {
                end = j - 1;
                break;
            }
        }
        maxEnd[i] = end;
    }

    // Găsim numărul minim de santinele folosind algoritmul greedy
    int santinele = 0;
    int pozCurenta = 0;
    
    while (pozCurenta < n) {
        // Găsim santinela care poate acoperi pozCurenta și merge cel mai departe
        int bestEnd = -1;
        int bestPos = -1;
        
        // Căutăm printre toate santinelele care pot vedea pozCurenta
        for (int i = max(0, pozCurenta-k); i <= min(n-1, pozCurenta+k); i++) {
            if (minStart[i] <= pozCurenta && maxEnd[i] > bestEnd) {
                bestEnd = maxEnd[i];
                bestPos = i;
            }
        }

        if (bestPos == -1) {
            // Nu am găsit nicio santinelă validă
            fout << "-1\n";
            return;
        }

        santinele++;
        pozCurenta = bestEnd + 1;
    }

    fout << santinele;
}

#include <fstream>
#include <iostream>

using namespace std;

bool allMarked(int marcat[], int size) {
    for (int i = 0; i < size; i++) {
        if (marcat[i] == -1) {
            return false;
        }
    }
    return true;
}

int getRemainingMaxPeakPosition(int peaks[], int marcat[], int size) {
    int maxPeak = -1;
    int maxPeakIndex = -1;
    for (int i = 0; i < size; i++) {
        if (marcat[i] == -1) {
            if (peaks[i] > maxPeak) {
                maxPeak = peaks[i];
                maxPeakIndex = i;
            }
        }
    }

    return maxPeakIndex;
}

int main() {
    ifstream fin("santinele.in");
    ofstream fout("santinele.out");

    int cerinta;
    fin >> cerinta;

    if (cerinta == 1) {
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

    } else {
        int n, k;
        fin >> n >> k;
        int a[n];
        int marcat[n];
        for (int i = 0; i < n; i++) {
            fin >> a[i];
            marcat[i] = -1;
        }

        int santinele = 0;

        while (!allMarked(marcat, n)) {
            int maxPeakPosition = getRemainingMaxPeakPosition(a, marcat, n);
            for (int i = max(0, maxPeakPosition-k); i <= min(n-1, maxPeakPosition+k); i++) {
                marcat[i] = 1;
            }
            santinele++;
        }

        fout << santinele;
    }

    fin.close();
    fout.close();
    return 0;
}

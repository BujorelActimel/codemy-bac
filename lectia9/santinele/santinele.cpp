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

struct Interval {
    int startIndex;
    int endIndex;

    Interval(int stIndx, int endIndx) {
        startIndex = stIndx;
        endIndex = endIndx;
    }

    bool contains(int index) {
        return index >= startIndex && index <= endIndex;
    }
};

struct Peak {
    int height;
    bool marked;
};

vector<Interval> getAllIntervals(vector<Peak> peaks, int k) {
    vector<Interval> intervals;

    for (int i = 0; i < peaks.size(); i++) {
        int startIndex = i-k;
        // stanga
        for (int j = i - 1; j >= i - k; j--) {
            if (j < 0) {
                startIndex = 0;
                break;
            }
            if (peaks[j].height > peaks[i].height) {
                startIndex = j + 1;
                break;
            }
        }

        int endIndex = i+k;
        // dreapta
        for (int j = i + 1; j <= i + k; j++) {
            if (j >= peaks.size()) {
                endIndex = peaks.size() - 1;
                break;
            }
            if (peaks[j].height > peaks[i].height) {
                endIndex = j - 1;
                break;
            }
        }

        intervals.push_back(Interval(startIndex, endIndex));
    }

    return intervals;
}

Interval bestInterval(vector<Interval> intervals, int index) {
    Interval result(-1, -1);
    for (auto interval : intervals) {
        if (interval.startIndex <= index && interval.endIndex > result.endIndex) {
            result = interval;
        }
    }

    return result;
}

void solve2() {
    int n, k;
    fin >> n >> k;
    vector<Peak> peaks(n);
    for (int i = 0; i < n; i++) {
        fin >> peaks[i].height;
        peaks[i].marked = false;
    }

    // genereaza toate intervalele
    auto intervals = getAllIntervals(peaks, k);

    int santinele = 0;

    for (int i = 0; i < peaks.size(); i++) {
        if (!peaks[i].marked) {
            auto interval = bestInterval(intervals, i);
            for (int j = interval.startIndex; j <= interval.endIndex; j++) {
                peaks[j].marked = true;
            }
            santinele++;
        }
    }

    // cout << santinele << '\n';

    fout << santinele;
}

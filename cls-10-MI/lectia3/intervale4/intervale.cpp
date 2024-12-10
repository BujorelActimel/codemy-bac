#include <iostream>
#include <fstream>

using namespace std;

struct Interval {
    int start, end;
};

struct Stiva {
    Interval intervale[100000];
    int vfStiva = 0;

    void push(Interval element) {
        intervale[vfStiva] = element;    // adaug elementul peste restul
        vfStiva++;                      // cresc varful
    }

    void pop() {
        vfStiva--;     // scad varful
    }

    bool isEmpty() {
        return vfStiva == 0;
    }

    Interval top() {
        return intervale[vfStiva-1];
    }
};

bool sePotCombina(Interval int1, Interval int2) {
    return (int1.start >= int2.start && int1.start <= int2.end) || (int1.end >= int2.start && int1.end <= int2.end) || (int2.start >= int1.start && int2.start <= int1.end) || (int2.end >= int1.start && int2.end <= int1.end);
}

int main() {
    ifstream fin("intervale4.in");
    ofstream fout("intervale4.out");

    int n;
    fin >> n;

    Interval intervale[n];

    Stiva stiva;

    for (int i = 0; i < n; i++) {
        fin >> intervale[i].start >> intervale[i].end;
    }

    for (int i = 0; i < n; i++) {
        if (stiva.isEmpty()) {
            stiva.push(intervale[i]);
        }
        else {
            // daca pot sa combin cu varful stivei
            if (sePotCombina(intervale[i], stiva.top())) {
                Interval top = stiva.top();
                stiva.pop();
                Interval nou;
                nou.start = min(top.start, intervale[i].start);
                nou.end = max(top.end, intervale[i].end);

                intervale[i] = nou;
                i--;
            }
            else {
                stiva.push(intervale[i]);
            }
        }
    }

    fout << stiva.vfStiva;

    fin.close();
    fout.close();
    return 0;
}

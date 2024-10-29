#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

bool prime_intre_ele(int n, int m) {
    for (int d=2; d<=min(n, m); d++)
    {
        if (n%d==0 && m%d==0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, m;
    fin >> n >> m;
    if (prime_intre_ele(n, m)) {
        fout << "DA\n";
    }
    else {
        for (int d=2; d<=min(n, m); d++)
        {
            if (n%d==0 && m%d==0)
            {
                fout << d << ' ';
            }
        }
    }
    return 0;
}
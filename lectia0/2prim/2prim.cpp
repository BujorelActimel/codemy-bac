#include <fstream>

using namespace std;

bool estePrim(int nr) {
    if (nr < 2) {
        return false;
    }
    if (nr == 2) {
        return true;
    }
    if (nr % 2 == 0) {
        return false;
    }

    for (int div = 3; div * div <= nr; div += 2) {
        if (nr % div == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream fin("2prim.in");

    int n;
    int cnt = 0;

    fin >> n;

    int nr;
    for (int i = 0; i < n; i++) {
        fin >> nr; 
        if (estePrim(nr % 100)) {
            cnt++;
        }
    }

    ofstream fout("2prim.out");
    fout << cnt << "\n";
}

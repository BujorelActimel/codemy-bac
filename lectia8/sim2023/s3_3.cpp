#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("bac.txt");

    int n, x, y, i=1, maxim=0;
    while(fin>>x) {
        if(x>=maxim) {
            cout<<i<<" ";
            maxim=x;
        }
        i++;
    }
    cout << '\n';
    fin.close();
    return 0;
}

// 7 4 9 10 10 10 3 9 2 10 10 8 2 30

#include <iostream>

using namespace std;

int main() {
    int nr, n, par=0, imp=0;
    cin>>nr;
    for(int i=0;i<nr;i++)
    {
        cin>>n;
        if(n%2==0) par++;
        else imp++;

    }
    cout << abs(par-imp) << '\n';
    return 0;
}
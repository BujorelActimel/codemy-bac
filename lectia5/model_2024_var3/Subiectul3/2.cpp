#include <iostream>

using namespace std;

int main()
{
    int n, i, x, k=0, v[100], kprim=0;
    cin>>n;
    for (i=0; i<n; i++) {
        cin>>v[i];
    }

    while (v[0]) {
        kprim++;
        v[0] /= 10;
    }


    for(i=1; i<n; i++)
    {
        while (v[i]) {
            k++;
            v[i] /= 10;
        }
        if (k != kprim) {
            cout << "NU\n";
            return 0;
        }
        k = 0;
    }
    cout<<"DA "<<kprim << '\n';

    return 0;
}
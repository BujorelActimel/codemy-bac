#include <iostream>

using namespace std;

void duplicare(int n, int &d)
{
    d = 0;
    int p = 1;
    bool existaCifraImpara = false;

    int numarReversat = 0;
    while (n > 0)
    {
        int cifra = n % 10;
        n /= 10;

        if (cifra % 2 == 1)
        {
            numarReversat = numarReversat * 100 + cifra * 10 + cifra;
            existaCifraImpara = true;
        }
        else
        {
            numarReversat = numarReversat * 10 + cifra;
        }
    }

    if (!existaCifraImpara)
    {
        d = -1;
        return;
    }
    while (numarReversat > 0)
    {
        d = d * 10 + numarReversat % 10;
        numarReversat /= 10;
    }
}

int main()
{
    int n, d;
    cin >> n;
    duplicare(n, d);
    cout << d;
    return 0;
}
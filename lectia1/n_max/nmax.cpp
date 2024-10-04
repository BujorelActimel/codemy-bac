#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;

    int MAX;
    cin >> MAX;

    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x >= MAX){
            MAX = x;
        }
    }
   
    cout << MAX << '\n';
    return 0;
}
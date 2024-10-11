#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int Max = 0, Min;
    int x;
    cin >> x;
    Max = Min = x;


    for ( int i = 2; i <= n; i++){
        cin >> x;
        if (x >= Max){
            Max = x;
        }
        if (x <= Min){
            Min = x;
        }

    }
    while (Max % Min == 0 && Min != 1){
        int cmmdc;
        for (int d = 1; d<= Min; d++){
            if (Min % d == 0 && Max % d == 0){
                cmmdc = d;
            }
        }
        Min = Min / cmmdc;
        Max = Max / cmmdc;
    }
    cout << Min << '/' << Max << '\n';
    return 0;
}
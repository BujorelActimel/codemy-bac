// 7 4 3 5 1 2 
// 1 2 3 4 5 6 


// 1: _ _ _ _ _ _ _
// 2: _ _ _ _
// 3: _ _ _
// 4: _ _ _ _ _
// 5: _
// 6: _ _


// stack: 
//       _ _
//    _ _ _ _ _
// _ _ _ _ _ _ _

// 1 4 6

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cuburi[n + 1];

    int stack[n+1];
    int varf = 0;

    for (int i = 1; i <= n; i++) {
        cin >> cuburi[i];
    }

    for (int i = 1; i <= n; i++) {
        if (varf == 0) {
            stack[varf++] = i;
            continue;
        }
        if (cuburi[i] <= cuburi[stack[varf-1]]) {
            stack[varf++] = i;
        }
        else {
            while (!(cuburi[i] <= cuburi[stack[varf-1]])) {
                varf--;
            }
            stack[varf++] = i;
        }
    }

    cout << varf << '\n';
    for (int i = 0; i < varf; i++) {
        cout << stack[i] << ' ';
    }
    cout << '\n';

    return 0;
}

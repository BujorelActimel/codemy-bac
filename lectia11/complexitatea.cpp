for (int i = 1; i <= n; i++) {
    suma += i;
}

-> O(n)

for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; i++) {
        suma += i;
    }
}
-> O(n^2)


O(1) -> 


int a(int n) {
    return n % 2;
}
void sub(int n, int v[], int x) {
    for (int i = 0; i < n; i++) {
        if (v[i] == x && i > 0) {
            // shift spre dreapta
            for (int j = i; j > 0; j--) {
                v[j] = v[j-1];
            }

            v[0] = x;
        }
    }
}

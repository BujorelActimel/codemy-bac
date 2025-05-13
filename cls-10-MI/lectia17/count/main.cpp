double avg(double a[], int n) {
    double s = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
    }
    return s / n;
}

int count(double a[], int n) {
    int nr = 0;

    double medie = avg(a, n);

    for (int i = 0; i < n; i++) {
        if (a[i] >= medie) {
            nr++;
        }
    }

    return nr;
}
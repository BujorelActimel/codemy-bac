struct Stiva {
    int elemente[100]; // aici memoram elemetele stivei
    int varf = 0;      // index-ul varfului stivei

    bool isEmpty() {
        return varf == 0;
    }

    void push(int element) {
        elemente[varf] = element;
        varf++;
    }

    int pop() {
        varf--;
        return elemente[varf];
    }
};
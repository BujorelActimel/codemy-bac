// pentru i<-n,1,-1 execută == for (int i = n; i >= 1; i--)

// 15, 3, 4

// 15 -> nr++
// 14 
// 13 
// 12 
// 11
// 10
// 9  -> nr++
// 8  -> nr++
// 7
// 6  -> nr++
// 5
// 4  -> nr++
// 3  -> nr++

// raspuns a: 6

// b:

// 15, 3, 3

// 16, 4, 4

for (int i = 1; i <= n; i++) {
    ...
    ...
    ...
}


int i = 1;
while(i <= n) {
    ...
    ...
    ...
    i++;
}
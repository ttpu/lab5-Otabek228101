#include <stdio.h>

int main() {
    int x, y, M, m, r;

    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    if (x > y) {
        M = x;
        m = y;
    } else {
        M = y;
        m = x;
    }

    while (m != 0) {
        r = M % m; 
        M = m;    
        m = r;     
    }


    printf("The GCD is: %d\n", M);

    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    bool big = false, min = false;
    
    printf("n: ");
    scanf("%d", &n);
    
    int arr[n]; 
    
    for (i = 0; i < n; i++) {
        printf("number: ");
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            big = true;
        } else if (arr[i] < arr[i - 1]) {
            min = true;
        }
    }

    if (big && !min) {
        printf("ascending sequence\n");
    } else if (min && !big) {
        printf("descending sequence\n");
    } else {
        printf("neither ascending nor descending sequence\n");
    }
    
    return 0;
}
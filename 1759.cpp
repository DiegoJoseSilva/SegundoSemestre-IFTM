#include <stdio.h>

int main() {

    int n, i=0;
    scanf ("%d", &n);
    if (n>0 && n <10000000){
            printf ("Ho");
        for (i=1; i<n; i++){
            printf (" Ho");
        }
        printf ("!\n");
    }
    return 0;
}

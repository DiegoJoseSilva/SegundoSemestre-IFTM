#include <stdio.h>

int main() {

    int n;

    scanf ("%d", &n);

    if (n>=1 && n <=40){
        int vet [n];

        for (int i=0; i<n; i++){
            vet [i]=0;
        }
        vet [n-1]=1;
        vet [n-2]=1;

        for (int i= n-3; i>=0; i--){
            vet [i]= vet [i+1] + vet [i + 2];
        }

        for (int i=0; i<n; i++){
           if (i > 0) {
                printf(" ");
            }
            printf("%d", vet[i]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {

    int L=0, R=0, i=0;
    do{
        int soma=0;
        scanf ("%d %d", &L, &R);
        if (L==0 && R==0){
            i++;
        }else{
            soma= L+R;
            printf ("%d\n", soma);
        }
    }while (i==0);
    return 0;
}

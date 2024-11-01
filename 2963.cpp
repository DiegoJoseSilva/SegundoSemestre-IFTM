#include <stdio.h>

int main() {

    int n;

    scanf ("%d", &n);
    if (n>=2 && n<100000){
        int votos [n], i=0, x;

        for (i=0; i<n; i++){
            votos [i]=0;
        }

        for (i=0; i<n; i++){
            scanf ("%d", &x);
            votos [i]= x;
        }

        int maior= votos [0], vencedor=1;

         for (i=1; i<n; i++){
            if (votos [i]> maior){
                vencedor= 0;
                break;
            }
        }

        if (vencedor){
            printf ("S\n");

        }else{
            printf ("N\n");
        }
    }
    return 0;
}

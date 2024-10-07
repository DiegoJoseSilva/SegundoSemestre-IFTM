#include <stdio.h>

int main() {

    int a, b, n, i=0, c=0, jogador1=0, jogador2=0;
    do{
        scanf ("%d", &n);
        if (n==0){
            i++;
        }else if (n>0 && n<=10){
            for(c=0; c<n; c++){
                scanf ("%d %d", &a, &b);
                if ((a>=0 && a<=10) && (b>=0 && b<=10)){
                    if (a>b){
                        jogador1++;
                    }else if (b>a){
                        jogador2++;
                    }
                }
            }
            printf ("%d %d\n", jogador1, jogador2);
            jogador1=0;
            jogador2=0;
        }
    }while (i==0);
    return 0;
}

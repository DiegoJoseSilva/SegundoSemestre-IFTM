#include <stdio.h>

int main() {
    int i=0;
    char comando, posicaooAtual = 'N';
    do{
        int n=0, c=0;
        scanf ("%d", &n);
        if(n>=1 && n<=1000){
            for (c = 0; c < n; c++){
                scanf(" %c", &comando);
                if (posicaooAtual=='N' && comando=='E'){
                        posicaooAtual = 'O';
                }else if (posicaooAtual=='N' &&comando=='D'){
                        posicaooAtual= 'L';

                }else if (posicaooAtual=='L' && comando=='E'){
                        posicaooAtual = 'N';
                }else if (posicaooAtual=='L' &&comando=='D'){
                        posicaooAtual= 'S';

                }else if (posicaooAtual=='S' && comando=='E'){
                        posicaooAtual = 'L';
                }else if (posicaooAtual=='S' &&comando=='D'){
                        posicaooAtual= 'O';

                }else if (posicaooAtual=='O' && comando=='E'){
                        posicaooAtual = 'S';

                }else if (posicaooAtual=='O' &&comando=='D'){
                        posicaooAtual= 'N';
                }
            }
            printf ("%c\n", posicaooAtual);
            posicaooAtual= 'N';
        }else{
        i++;
        }
    }while (i==0);

    return 0;
}

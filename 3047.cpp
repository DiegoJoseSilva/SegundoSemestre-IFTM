#include <stdio.h>

int main() {

    int mae, x, y, diferenca, maior;

    scanf ("%d", &mae);
    if (mae >=40 && mae<=110){
        scanf ("%d", &x);
        if (x>=1 && x<=mae){
            scanf ("%d", &y);
            if (y>=1 && y <=mae && y!=x){
                diferenca= mae - (x+y);
                maior= x;
                if (y>maior){
                    maior=y;
                }
                if (diferenca>maior){
                    maior= diferenca;
                }
                printf ("%d\n", maior);
            }
        }
    }
    return 0;
}

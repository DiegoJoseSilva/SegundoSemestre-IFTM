#include <stdio.h>
int main() {
    int t, resultado, segundo;
    scanf ("%d", &t);
    if (t>=1 && t<=1000){
        segundo = t*2;
        resultado = segundo * 2;
        printf ("%d\n", resultado);
    }

    return 0;
}

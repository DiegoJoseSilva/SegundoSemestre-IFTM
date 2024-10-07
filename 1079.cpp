#include <stdio.h>

int main() {
    int n, i=1;
    double media, a, b, c;
    scanf ("%d", &n);
    do{
    scanf("%lf %lf %lf", &a, &b, &c);
    media= ((a*2) + (b*3) + (c*5))/10;
    printf ("%.1lf\n", media);
    i++;
    }while(i<=n);
    return 0;
}

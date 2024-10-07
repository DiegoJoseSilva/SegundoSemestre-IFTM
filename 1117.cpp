#include <stdio.h>

int main() {

    double a, b, media;

    do{
          scanf ("%lf", &a);
          if (a < 0 || a > 10){
                 printf ("nota invalida\n");
          }
    }while (a < 0 || a > 10);

    do{
         scanf ("%lf", &b);
         if (b < 0 || b >10){
                 printf ("nota invalida\n");
         }
    }while (b < 0 || b >10);
    media= (a + b)/2;
    printf ("media = %.2lf\n", media);
    return 0;
}

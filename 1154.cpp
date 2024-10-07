#include <stdio.h>

int main() {

    int i=0, idade=0;
    double media, total=0;
    do{
    scanf ("%d", &idade);
    if (idade>=0){
        total= total + idade;
        i++;
    }
    }while (idade>=0);
    media= total/i;
    printf ("%.2lf\n", media);
    return 0;
}

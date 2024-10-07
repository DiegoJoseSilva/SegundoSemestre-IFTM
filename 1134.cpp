#include <stdio.h>

int main() {

    int alcool=0, gasolina=0, diesel=0, op=0;
    do{
        scanf ("%d", &op);
        if (op==1){
            alcool++;
        }else if (op==2){
            gasolina++;
        }else if (op==3){
            diesel++;
        }
    }while (op!=4);
    printf ("MUITO OBRIGADO\n");
    printf ("Alcool: %d\n", alcool);
    printf ("Gasolina: %d\n", gasolina);
    printf ("Diesel: %d\n", diesel);
    return 0;
}

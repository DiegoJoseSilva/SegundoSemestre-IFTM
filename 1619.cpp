#include <stdio.h>

int main() {

    int n, dataAtual[3],data [3], i=0, diferencaanos, diasanos=0;
    int diasdosmes [12] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &n);
    if (n>0 && n<=1000){
        for (i=0; i<n; i++){
                scanf ("%d %d %d %d %d %d", &dataAtual [0], &dataAtual [1], &dataAtual [2], &data [0], &data [1], &data [2]);
                diferencaanos= dataAtual [0] - data [0];
                int vetanos [diferencaanos];
                    int x= dataAtual [0], y= data [0];


                    for (i=x ; i <= y; i++){
                        if (i%400==0 || i%4==0 && i [0]%100!=0){
                            diasdosmes [1] = 29;
                            for (i=0; i<12; i++){
                                diasanos = diasanos + diasdosmes [i];
                            }
                            printf ("A diferenca de anos em dias e %d\n", diasanos);
                        }else{
                            for (i=0; i<12; i++){
                                diasanos = diasanos + diasdosmes [i];
                            }
                            printf ("A diferenca de anos em dias e %d\n", diasanos);
                        }
                        int totaldiasanos= totaldiasanos + diasanos;




                    }


        }
    }
    return 0;
}

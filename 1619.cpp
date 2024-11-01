#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);


    int dias_por_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dias_por_mes_bissexto[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int caso = 0; caso < n; caso++) {
        int ano1, mes1, dia1, ano2, mes2, dia2;


        scanf("%d-%d-%d %d-%d-%d", &ano1, &mes1, &dia1, &ano2, &mes2, &dia2);

        int total_dias1 = 0, total_dias2 = 0;


        for (int ano = 1970; ano < ano1; ano++) {
            if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
                total_dias1 += 366; // Ano bissexto
            } else {
                total_dias1 += 365; // Ano normal
            }
        }

        for (int mes = 0; mes < mes1 - 1; mes++) {
            if ((ano1 % 400 == 0) || (ano1 % 4 == 0 && ano1 % 100 != 0)) {
                total_dias1 += dias_por_mes_bissexto[mes];
            } else {
                total_dias1 += dias_por_mes[mes];
            }
        }


        total_dias1 += dia1;


        for (int ano = 1970; ano < ano2; ano++) {
            if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
                total_dias2 += 366; // Ano bissexto
            } else {
                total_dias2 += 365; // Ano normal
            }
        }


        for (int mes = 0; mes < mes2 - 1; mes++) {
            if ((ano2 % 400 == 0) || (ano2 % 4 == 0 && ano2 % 100 != 0)) {
                total_dias2 += dias_por_mes_bissexto[mes];
            } else {
                total_dias2 += dias_por_mes[mes];
            }
        }

        total_dias2 += dia2;


        int diferenca = total_dias1 > total_dias2 ? total_dias1 - total_dias2 : total_dias2 - total_dias1;

        printf("%d\n", diferenca);
    }

    return 0;
}

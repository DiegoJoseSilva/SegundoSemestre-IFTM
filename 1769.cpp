#include <stdio.h>

int main() {
    int cpf[11];

    while (scanf("%1d%1d%1d.%1d%1d%1d.%1d%1d%1d-%1d%1d",
                 &cpf[0], &cpf[1], &cpf[2], &cpf[3], &cpf[4], &cpf[5],
                 &cpf[6], &cpf[7], &cpf[8], &cpf[9], &cpf[10]) != EOF) {
        int soma = 0, soma2 = 0, b1, b2;


        for (int i = 0; i < 9; i++) {
            soma += cpf[i] * (i + 1);
        }
        b1 = soma % 11;
        if (b1 == 10) b1 = 0;


        for (int i = 0; i < 9; i++) {
            soma2 += cpf[i] * (9 - i);
        }
        b2 = soma2 % 11;
        if (b2 == 10) b2 = 0;


        if (cpf[9] == b1 && cpf[10] == b2) {
            printf("CPF valido\n");
        } else {
            printf("CPF invalido\n");
        }
    }

    return 0;
}

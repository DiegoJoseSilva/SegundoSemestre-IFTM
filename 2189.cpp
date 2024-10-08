#include <stdio.h>

int main() {
    int n, i, c, ingresso, posicao, premiado, teste = 0;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        teste++;
        premiado = 0;

        for (c = 1; c <= n; c++) {
            scanf("%d", &ingresso);
            if (c == ingresso) {
                premiado = ingresso;
            }
        }
        printf("Teste %d\n", teste);
        printf("%d\n\n", premiado);
    }

    return 0;
}

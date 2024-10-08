#include <stdio.h>

int main() {
    int n, j, z, i, teste = 0, diferenca_acumulada;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }
        teste++;
        diferenca_acumulada = 0;

        printf("Teste %d\n", teste);

        for (i = 0; i < n; i++) {
            scanf("%d %d", &j, &z);

            diferenca_acumulada += j - z;
            printf("%d\n", diferenca_acumulada);
        }

        printf("\n");
    }

    return 0;
}

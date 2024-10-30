#include <stdio.h>

int main() {

    int n, m, x, i = 0, contador = 0;

    scanf("%d", &n);
    if (n >= 1 && n <= 100) {
        int vet[n + 1];


        for (i = 1; i <= n; i++) {
            vet[i] = 0;
        }

        scanf("%d", &m);

        if (m >= 1 && m <= 300) {
            for (i = 1; i <= m; i++) {
                scanf("%d", &x);
                if (x >= 1 && x <= n) {
                    vet[x]++;
                }
            }


            for (i = 1; i <= n; i++) {
                if (vet[i] == 0) {
                    contador++;
                }
            }
        }

        printf("%d\n", contador);
    }

    return 0;
}

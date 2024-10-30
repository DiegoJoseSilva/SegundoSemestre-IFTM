#include <stdio.h>

int main() {

    int n, m, troco;
    int notas[] = {2, 5, 10, 20, 50, 100};
    int i, j, possible;

    while (1) {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) {
            break;
        }

        troco = m - n;
        possible = 0;

        for (i = 0; i < 6; i++) {
            for (j = i + 1; j < 6; j++) {
                if (notas[i] + notas[j] == troco) {
                    possible = 1;
                    break;
                }
            }
            if (possible==1 ) break;
        }

        if (possible==1) {
            printf("possible\n");

        } else {
            printf("impossible\n");
        }
    }

    return 0;
}

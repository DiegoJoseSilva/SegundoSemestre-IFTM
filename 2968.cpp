#include <stdio.h>

int main() {
    int V, N;
    scanf("%d %d", &V, &N);

    int total = V * N;


    for (int i = 10; i <= 90; i += 10) {
        int placas = (total * i + 99) / 100;
        printf("%d", placas);
        if (i < 90) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

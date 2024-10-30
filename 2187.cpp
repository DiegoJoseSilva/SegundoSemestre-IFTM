#include <stdio.h>

int main() {
    int v, teste = 1;


    scanf("%d", &v);

    while (v > 0 && v <= 10000) {
        int conta[4] = {0, 0, 0, 0};

        conta[0] = v / 50;
        v = v % 50;

        conta[1] = v / 10;
        v = v % 10;

        conta[2] = v / 5;
        v = v % 5;

        conta[3] = v;

        printf("Teste %d\n", teste);
        printf("%d %d %d %d\n\n", conta[0], conta[1], conta[2], conta[3]);

        scanf("%d", &v);
        teste++;
    }

    return 0;
}

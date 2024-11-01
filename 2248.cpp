#include <stdio.h>

int main() {
    int x, turma = 1;

    while (1) {
        scanf("%d", &x);
        if (x == 0){
            break;
        }

        if (x >= 1 && x <= 1000) {
            int alunos[x], media[x];
            int c = 0, m = 0;


            for (int i = 0; i < x; i++) {
                scanf("%d %d", &c, &m);
                alunos[i] = c;
                media[i] = m;
            }


            int maior = media[0];
            for (int i = 1; i < x; i++) {
                if (media[i] > maior) {
                    maior = media[i];
                }
            }

            printf("Turma %d\n", turma);
            turma++;

            for (int i = 0; i < x; i++) {
                if (media[i] == maior) {
                    printf("%d ", alunos[i]);
                }
            }
            printf("\n\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main() {

   int l, r, total;
   while (1){
        scanf ("%d %d", &l, &r);
        if (l==0 && r==0){
            return 0;
        }
        if (l>0 && l<=5 && r>0 && r<=5){
            total= l+r;
            printf ("%d\n", total);
        }
   }
    return 0;
}

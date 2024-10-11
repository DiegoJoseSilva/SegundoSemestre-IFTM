#include <stdio.h>

int main() {

    int t, a=0, b=0,c=0 , d=0, e=0, corretos=0, i=1;
    scanf("%d", &t);
    if (t>=1 && t<=4){
        scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
        if (a==t && a>=1 && a<=4){
            corretos++;
        }if(b==t && b>=1 && b<=4){
            corretos++;
        }if(c==t && c>=1 && c<=4){
            corretos++;
        }
        if(d==t && d>=1 && d<=4){
            corretos++;
        }
        if(e==t && e>=1 && e<=4){
            corretos++;
        }
    }
    printf ("%d\n", corretos);
    return 0;
}

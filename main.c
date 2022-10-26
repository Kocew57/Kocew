#include <stdio.h>
int main ()
{
    int poeni, ocenka = 0;
    printf("Vnesi poeni: \n");
    scanf("%d", &poeni);
    ocenka=(poeni/10) + !!(poeni%10);
    (poeni<0 || poeni>100)? printf("Vnesi validen broj poeni"):(poeni>0 && poeni<50)? printf("%d",5):printf("%d",ocenka) ;

    return 0;
}

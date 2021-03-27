#include<stdio.h>
int main()
{
    int cp1,cp2,np1,np2;
    float pp1,pp2,value;
    scanf("%d %d  %f ",&cp1,&np1,&pp1);
    scanf("%d %d %f",&cp2,&np2,&pp2);
    value=(np1*pp1)+(np2*pp2);
    printf("VALOR A PAGAR: R$ %0.2f\n",value);

return 0;
}


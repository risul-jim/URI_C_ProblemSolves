#include<stdio.h>
int main()
{
    char N[5];
    double a,b,SB;
        scanf("%s %lf %lf",&N,&a,&b);
          SB=a+(b*15)/100;
        printf("TOTAL = R$ %.2lf\n",SB);

return 0;
}

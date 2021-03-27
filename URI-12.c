
#include<stdio.h>
int main()
{
    double A,B,C,pi=3.14159,t,c,tr,q,r;
    scanf("%lf %lf %lf",&A,&B,&C);
    t=(A*C)/2;
    c=pi*(C*C);
    tr=C*(A+B)/2;
    q=B*B;
    r=A*B;
   printf("TRIANGULO: %.3lf\n",t);
   printf("CIRCULO: %.3lf\n",c);
   printf("TRAPEZIO: %.3lf\n",tr);
   printf("QUADRADO: %.3lf\n",q);
   printf("RETANGULO: %.3lf\n",r);

return 0;
}

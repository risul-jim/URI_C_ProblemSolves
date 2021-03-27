#include<stdio.h>
int main()
{
  double A, B, C,n,m,o,p;
  scanf("%lf %lf %lf", &A, &B, &C);
  m= B*B;
  n=A*A;
  o=C*C;
     if((A >= B+C) || (B>= A+C) || (C>= A+B))
  {
       printf("NAO FORMA TRIANGULO\n");
  }
    else if((n == m + o) || (m == n + o) || (o == m + n))
  {
       printf("TRIANGULO RETANGULO\n");
  }
   else if((n > m+o) || (m > n+o) || (o > m+n))
  {
       printf("TRIANGULO OBTUSANGULO\n");
  }
  else if((n < m+o) || (m < n+o) || (o< m+n))
  {
       printf("TRIANGULO ACUTANGULO\n");
  }
if(A == B && B == C)
{
     printf("TRIANGULO EQUILATERO\n");
}
else if(A == B || B == C || C==A)

    {
        printf("TRIANGULO ISOSCELES\n");
    }
return 0;
}

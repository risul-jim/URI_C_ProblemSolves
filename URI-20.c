#include<stdio.h>
int main()
{
    int A;
     scanf("%d",&A);
     printf("%d ano(s)\n",A/365);
    A=(A%365);
     printf("%d mes(es)\n",A/30);
    A=(A%30);
     printf("%d dia(s)\n",A);

return 0;
}


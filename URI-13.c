#include<stdio.h>
int main()
{
    int a,b,abs;
    scanf("%d %d %d",&a,&b,&abs);
     if(a>=b && a>=abs)

        printf("%d eh o maior\n",a);

     else if(b>=a && b>=abs)

        printf("%d eh o maior\n",b);

     else

        printf("%d eh o maior\n",abs);


return 0;
}


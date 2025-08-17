#include<stdio.h>
int main ()
{
int a,b,c;
printf("the  maximum value of three numbers ");
scanf("%d %d %d",&a,&b,&c);

  if(a>b && a>c)

   printf("The maximum value = %d",a);

 else if (b>a && b>c)

    printf("The maximum value =%d",b);

    else {

    printf("The maximum value =%d",c);
    }


 return 0;

}
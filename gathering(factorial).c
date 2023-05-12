#include<stdio.h>

fact(int x)
{
   if(x<=0)
   {
    return 1;
   }
   else
   {
   	x=x*fact(x-1);
   }
   return x;
}
main ()
{
	int n;
	printf("enter your number=");
	scanf("%d",&n);
	
	printf("factorial of %d=%d",n,fact(n));
}


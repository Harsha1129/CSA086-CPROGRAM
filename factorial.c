#include <stdio.h>
#include <conio.h>
main()
{
 int fact=1;
 int n;
 printf("Enter the value of n\n",n);
 scanf("%d",&n);
 while (n>0)
 { fact=fact*n;
   n=n-1;
 }
 printf("fact of n is:%d",fact);
}

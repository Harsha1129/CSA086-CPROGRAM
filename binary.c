#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
  int b,org;
  int sum = 0;
  int n = 0;
  int a;
  clrscr();
  printf("enter an binary number \n");
  scanf("%d",&b);
  org = b;
 while(b>0)
  {
    a=b%10;
    sum = sum + a * pow(2,n);
    n=n+1;
    b=b/10;
  }
    printf("The binary number is: %d\n",org);
    printf("The decimal number is: %d\n",sum);
}



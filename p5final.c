#include<stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a, int b)
{
  int t;
  while(b!=0)
    {
      t=a;
      b=b%a;
      a=t;
    }
  return t;
}
void output(int a, int b, int gcd)
{
  printf("the gcd of %d and %d is %d\n",a,b,gcd);
}
int main()
{
  int a,b,g;
  a=input();
  b=input();
  g=gcd(a,b);
  output(a,b,g);
  return 0;
}


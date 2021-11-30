#include <stdio.h>

int fac(int);
int main()

{
  int n;

  printf("Enter a number ");
  scanf("%d", &n);
  printf("The factorial of given number is %d", fac(n));
}

int fac(int x)
{

  if (x > 1)
    return x * fac(x - 1);

  else
    return 1;
}
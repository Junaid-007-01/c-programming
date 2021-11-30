#include <stdio.h>
int main()
{
    int temp;
    int x = 10;
    int *p = &x;
    int y = 5;
    int *s = &y;


////////
    temp = *p;
    *p = *s;
    *s = temp;
    printf("Value of x is %d and value of y is %d", *p, *s);
}
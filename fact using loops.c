#include <stdio.h>
int main()
{
    int n;
    int i;
    int fac = 1;
    printf("Enter the Integer of which Facorial is to be calculated: ");
    scanf("%d", &n);
    for(i = n; i>=1;i--)
    {
        fac *= i;
    }
    printf("The factorial of %d = %d",n,fac);
    return 0;
}
#include <stdio.h>
int main()
{
    int a = 1, b = 1, c, n;
    printf("Enter the number of terms upto which Fabinocci series is to evaluated\n");
    scanf("%d", &n);
    //printf("%d ", a);
    //printf("%d ", b);
    for (int i = 1; i < n; i++)
    {
        c = a + b;
        printf("%d ", a);
        a = b;
        b = c;
    }
    return 0;
}
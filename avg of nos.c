//to find average of n numbers
#include <stdio.h>
int main()
{
    int a[100];
    int n;
    float average;
    float sum = 0;
    printf("Type the no. of elemnts u want\n");
    scanf("%d", &n);
    printf("Type the numbers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The numbers you entered are as follows\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i]; 
    }
    average = sum / n;
    printf("\nThe average of given numbers is %.2f\n", average);
}
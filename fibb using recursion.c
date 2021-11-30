//Fibonacci using Recursion-0 1 1 2 3 5....
#include <stdio.h>
int fibo(int); //Declaring a Function named fibo
int main()
{
    int n;
    int i;
    printf("Enter the value of 'n' upto which Fabinocci is to be printed: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) // In order to print full series upto 'n'
    {
        printf("%d ", fibo(i));
    }
}

//Defining the Function

int fibo(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return fabi(x - 1) + fabi(x - 2); //Using Recursion recalling the Function inside a Function
}
#include <stdio.h>
float ack(int, int);
int main()
{
    int m, n;
    printf("Enter value of 'm' & 'n': ");
    scanf("%d %d", &m, &n);
    printf("%.2f ", ack(m, n));
    return 0;
}

//Defining the function

float ack(int x, int y)
{
    if (x == 0)
        return y + 1;
    else if (x > 0 && y == 0)
        return ack(x - 1, 1);
    else
        return ack(x - 1, ack(x, y - 1));
}
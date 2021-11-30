# include<stdio.h>
int main()
{
    int a[30][30];
    int r, c;
    printf("Input the no. of rows\n");
    scanf("%d", &r);
    printf("Input the no. of columns\n");
    scanf("%d", &c);
    printf("Enter Elements\n");
    for( int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        scanf("%d", &a[i][j]);
    }
    printf("The Matrix\n");
    for( int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
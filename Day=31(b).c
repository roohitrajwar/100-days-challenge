#include <stdio.h>

int main()
{
    int a[10][10], n, i, j;
    int sum = 0;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum = %d", sum);

    return 0;
}

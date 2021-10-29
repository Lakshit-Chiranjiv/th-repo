#include <stdio.h>

int main()
{
    int m,n;
    printf("enter m and n : ");
    scanf("%d%d",&m,&n);
    printf("\nenter elements in matrix :-\n");
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\ntranspose :-\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
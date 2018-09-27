#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("Enter the values of first Matrix \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the values of second Matrix \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("Sum of two matrix are %d \n",C[i][j]);
        }
        printf("\n");
    }

}

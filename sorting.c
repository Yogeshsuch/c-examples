#include<stdio.h>
void main()
{
    int A[]={69,23,36,55,27,71,15},T,i,j;
    for(i=0;i<=6;i++)
    {
        for(j=0;j<=6-i;j++)
        {
            if(A[j]>A[j+1])
            {
                T=A[j];
                A[j]=A[j+1];
                A[j+1]=T;
            }
        }
    }
    display(&A);
}


void display(int *p)
{
    int i;
    for(i=0;i<=6;i++)
    {
        printf("%d,",*(p+i));
    }
}

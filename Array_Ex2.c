//Sum of Even and Odd numbers in array//
#include<stdio.h>
void main()
{
    int a[5],i;
    printf("Enter the five numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        int evenSum=0, oddSum=0;
       while(i<5)
       {
           if(a[i]%2==0)
        {
            evenSum=evenSum+a[i];
        }
        else
        {
            oddSum=oddSum+a[i];
        }
        i++;
       }
       printf("Sum of all even numbers in array: %d\n",evenSum);
       printf("Sum of all odd numbers in array: %d\n",oddSum);

    }
}

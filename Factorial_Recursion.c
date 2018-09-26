#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("%d is factorial of %d",facto(a),a);
}

int facto(int n)
{
    int mul;
    if(n==1)
        return n;
    else
       mul=n*facto(n-1);
    return mul;
}



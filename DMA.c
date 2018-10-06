//Dynamic memory allocation
#include <stdio.h>
void main()
{
    int *ptr;  // this static memory allocation
    float *a;
    ptr=calloc(5,2);  // calloc create five memory block of two byte
    a=realloc(ptr,4); // realloc is used to resize of memory block created by only melloc and calloc function
    scanf("%f",&*a+0);
    printf("%.2f\n",*(a+0));
    free(ptr);
    free(a);  // free function release the memory of melloc and calloc function
}

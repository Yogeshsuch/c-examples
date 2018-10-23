//   Pattern  Output
//  65        AA
//  66       BAAB
//  67      CBAABC
//  68     DCBAABCD
//  69    EDCBAABCDE

#include<stdio.h>
int main()
{
    char ch,col,row;
    int i,space=10;
    for(row=65;row<=69;row++)
    {
        for(i=1;i<=space;i++)   // insert space
        {
            printf("%c",' ');
        }
        space=space-1;

        for(col=row;col>=65;col--)  // to print left side triangle
        {
            printf("%c",col);
        }

        for(col=65;col<=row;col++)   // to print right side triangle
        {
            printf("%c",col);
        }
      printf("\n");
    }

}

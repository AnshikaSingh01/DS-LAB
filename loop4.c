#include<stdio.h>
void main()
{
    int i,j,n;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
        ch=ch+i-1;
    }
}
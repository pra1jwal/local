#include<stdio.h>
void main()
{
    int i;
    char a[10];
    printf("Enter your name");
    scanf("%s",a);
    for(i=1;i<=10;i++)
    {
        printf("%s\t",a);
    }
}
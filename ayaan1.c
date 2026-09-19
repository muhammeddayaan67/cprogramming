#include <stdio.h>
int a=1 , b=2;
void demo();
void main()
{
    int a,b;
    printf("enter value of a and b:");
    scanf("%d%d",&a,&b);
    printf("the value of a =%d and b =%d\n",a,b);
    demo();
    printf("**THE END**\n");
}
void demo()
{
    printf("the value of a =%d and b =%d\n",a,b);
}
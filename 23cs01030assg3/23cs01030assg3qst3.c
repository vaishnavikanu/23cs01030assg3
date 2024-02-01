#include<stdio.h>
int main ()
{
    int a;
    int b;
    int c;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter c");
    scanf("%d",&c);
    if (a<b+c&&b<a+c&&c<a+b)
    printf("it forms triangle");
    else
    printf("not triangle");
    return 0;
}
#include <stdio.h>
int main ()
{
    int x;
    printf("enter an integer");
    scanf("%d",&x);
    if(x>0)
    printf("x is positive integer");
    if(x<0)
    printf("print x is negative integer");
    if(x==0)
    printf("x is zero");
    return 0;

}
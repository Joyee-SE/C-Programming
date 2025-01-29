#include <stdio.h>
int main(void)
{
    int a,b;
    scanf("%d %d", &a,&b);
    int x=a-b;
    if(x>=0)
    {
        printf("%d",x);
    }
    else
    {
        printf("0");
    }
    return 0;
}
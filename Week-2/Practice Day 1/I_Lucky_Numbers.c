#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    int x=N%10;
    int y=N/10;
    if(x%y==0)
    {
        printf("YES");
    }
    else if(y%x==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
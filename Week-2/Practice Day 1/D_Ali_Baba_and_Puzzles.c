#include <stdio.h>
int main(void)
{
    int a,b,c;
    long long int d;
    scanf("%d %d %d %lld", &a, &b, &c, &d);
        if(a+b-c==d || a-b+c==d || a+b*c==d || a-b*c==d || a*b+c==d || a*b-c==d)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
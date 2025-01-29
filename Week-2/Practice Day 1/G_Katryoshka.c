#include <stdio.h>
int main(void)
{
    long long n,m,k;
    scanf("%lld %lld %lld", &n, &m, &k);
    int min,add, result;
    if(n<m && n<k)
    {
        min=n;
    }
    else if(m<n && m<k)
    {
        min=m;
    }
    else if(k<n && k<m)
    {
        min=k;
    }
    n=n-min;
    k=k-min;
    if(n/2>=k)
    {
        add=k;
    }
    result = min+add;
    printf("%d",k);
    return 0;
}
#include <stdio.h>
#include<limits.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d ",&A[i]);
    }
    int low=INT_MAX;
    int pos;
    for(int i=0; i<N; i++)
    {
        if(A[i]<low)
        {
            low=A[i];
            pos=i+1;
        }
    }
    printf("%d %d", low,pos);
    return 0;
}
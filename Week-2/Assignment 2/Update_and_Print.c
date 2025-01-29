#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d",&N);
    int A[N];
    int i;
    for(i=0; i<N; i++){
        scanf("%d ", &A[i]);
    }
    int X,V;
    scanf("%d %d", &X, &V);
    for(i=N-1; i>=0; i--){
        if(i==X){
            A[i]=V;
        }
        printf("%d ", A[i]);
    }
    return 0;
}

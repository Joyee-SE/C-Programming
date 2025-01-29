#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    int ar[N];
    int sumpos=0;
    int sumneg=0;
    for(int i=0; i<N; i++){
        scanf("%d ",&ar[i]);
        if(ar[i]>0){
            sumpos= sumpos+ar[i];
        }
        else if(ar[i]<0){
            sumneg=sumneg+ar[i];
        }
    }
    printf("%d %d", sumpos, sumneg);
    return 0;
}
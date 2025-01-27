#include<stdio.h>
int main()
{
    long long int taka;
    scanf("%lld", &taka);
    if(taka > 1000){
        printf("I will buy Punjabi\n");
        if(taka >= 1500){
            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }
    } else{
        printf("Bad luck!\n");
    } return 0;
}

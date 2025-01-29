#include <stdio.h>
int main(void)
{
    char C;
    scanf("%c", &C);
    if(C=='z')
    {
        printf("a");
    }
    else
    {
        printf("%c", C+1);
    }
    return 0;
}
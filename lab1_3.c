#include <stdio.h>
int main()
{
    int r,mod3=0,mod11=0;
    scanf("%d",&r);
    mod3=r%3;
    mod11=r%11;
    printf("%d %d",mod3,mod11);
    return 0;
}

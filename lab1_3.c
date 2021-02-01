#include <stdio.h>
int main()
{
     long long int r,mod3=0,mod11=0;
    scanf("%lld",&r);
    mod3=r%3;
    mod11=r%11;
    printf("%lld %lld",mod3,mod11);
    return 0;
}

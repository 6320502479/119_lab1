#include <stdio.h>
int main()
{
    int x1=0,x2=0,s=0;
    scanf("%d %d",&x1,&s);
    if(s>-100000000 && s<=100000000)
    {
        x2=(2*s)-x1;
        printf("%d",x2);
    }
}

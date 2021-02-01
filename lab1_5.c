#include <stdio.h>
int main()
{
    int N,max=0,pos=0;
    scanf("%d",&N);
    int n[N],i=0;
    for(i;i<N;i++)
    {
        scanf("%d",&n[i]);
        if(max<n[i])
            max=n[i];
    }
     for(i=0;i<N;i++)
    {
        if(max!=n[i])
            pos++;
        if(max==n[i])
            break;
    }

    printf("%d %d",pos+1,max);
}

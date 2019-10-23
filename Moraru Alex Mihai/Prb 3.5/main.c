#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, s, t, d, prim;
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        if(i*i>n)
        {
            s=i*i;
            break;
        }
        t=i*i;
    }
    printf("t=%d\n", t);
    for(i=n; i<=2*n; i++)
    {
        prim=1;
        for(d=2; d<=i/2; d++)
        {
            if(i%d==0)
            {
                prim=0;
            }
        }
        if(prim==1)
        {
            printf("i=%d",i);
            break;
        }
    }
    return 0;
}

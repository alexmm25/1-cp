#include <stdio.h>
#include <stdlib.h>

int main()
{int n, d, i, prim;
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {prim=1;
    for(d=2;d<=i/2;d++)
        {if(i%d==0)
    {prim=0;}}
    if(prim==1)
    {printf("i=%d\n", i);}
    }
    return 0;
}

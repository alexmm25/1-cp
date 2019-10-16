#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50], n, i, max, min, j, k;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    j=0;
    k=0;
    for(i=0; i<n; i++)
    {

        if(min>a[i])
        {
            min=a[i];
            j=i;
        }

        if(max<a[i])
        {
            max=a[i];
            k=i;
        }

    }
    printf("min=%d,\n",min);
    printf("j=%d,\n", j);
    printf("max=%d,\n", max);
    printf("k=%d,\n", k);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int MinBanc(int s)
{
    int nr;
    nr=0;

    nr =s/500;
    s=s%500;
    if(s%500!=0)
    {
        nr =nr+s/200;
        s=s%200;
        if(s%200!=0)
        {
            nr =nr+s/100;
            s=s%100;
            if(s%100!=0)
            {
                nr =nr+s/50;
                s=s%50;
                if(s%50!=0)
                {
                    nr =nr+s/10;
                    s=s%10;
                    if(s%10!=0)
                    {
                        nr =nr+s/5;
                        s=s%5;
                        if(s%5!=0)
                        {
                            nr=nr+s;
                        }
                    }
                }
            }
        }


    }
    return nr;
}
int main()
{
    int s, nr;
    printf("s=");
    scanf("%d", &s);
    printf("The minimum number of bancnotes is %d",MinBanc(s));
    return 0;
}

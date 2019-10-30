#include <stdio.h>
#include <stdlib.h>


int calculatePowerAndDivisor(unsigned arabicNumber, int *divisor)
{
    int power=0;
    *divisor=1;
    while(arabicNumber/ *divisor>10)
    {
        ++power;
        *divisor*=10;
    }
    return power;
}

void printRoman(unsigned arabicNumber)
{
    const char *table[4][9]= { {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
        {"X","XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
        {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
        {"M", "MM", "MMM"}
    };
    int divisor;
    int power= calculatePowerAndDivisor(arabicNumber, &divisor);
    while(power>=0)
    {
        int column= arabicNumber/divisor;
        if(column>0)
        {
            printf("%s", table[power][column-1]);
        }
        --power;
        arabicNumber%=divisor;
        divisor/=10;
    }
}
int main()
{
    int arabicNumber;
    printf("n=");
    scanf("%d", &arabicNumber);
    printf("\n");
    printRoman(arabicNumber);

    return 0;
}

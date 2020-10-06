#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int d,r,p,b;

    printf("Enter Binary No.:");
    scanf("%d",&b);

    p=0;
    d=0;

        while (b!=0)
        {
            r=b%10;
            d=d+r*pow(2,p);
            b=b/10;
            p++;
        }

        printf("Decimal No.:%d",d);
}

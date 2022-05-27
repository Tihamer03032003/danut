#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,inv,nr;
    printf("Programul va functiona pana la introducerea valorii 0.\nIntroduceti un numar");
    scanf("%i",&n);
    while(n!=0)
    {
        inv=0;
        nr=0;
        while(n>0)
        {
            inv=inv*10+n%10;
        if(inv==0 && n%10==0)
            nr++;
        n=n/10;
        }
        printf("\nReversul este ");
        while(nr>0)
            {printf("0");
            nr--;
            }
        printf("%i",inv);
        printf("\nintroduceti un alt numar");
        scanf("%i",&n);
    }
    return 0;
}

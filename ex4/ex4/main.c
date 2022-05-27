#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,n,nr=0;
    printf("Programul se va incheia la introducerea valorii 0");
    printf("\nintroduceti un numar ");
    scanf("%i",&n);
    while(n!=0)
    {
        nr++;
        s=0;
        while(n>0)
        {
            s+=n%10;
            n/=10;
        }
        printf("\nsuma cifrelor este %i",s);
        printf("\nintroduceti un alt numar");
        scanf("%i",&n);
    }
    printf("numarul de citiri este %i",nr);
    return 0;
}

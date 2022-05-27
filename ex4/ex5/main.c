#include <stdio.h>
#include <stdlib.h>

int main()
{


    float n,max,okey=0;
    printf("Programul se va incheia la citirea valorii 0");
    printf("introduceti un numar ");
    scanf("%f",&n);
    max=n;
    while(n!=0)
    {
        okey=1;
        if(n>max)
            max=n;
        printf("introduceti un numar ");
        scanf("%f",&n);
    }
    if(okey==0)
        printf("s-au introdus doar valori nule");
    else printf("Maximul este %.0f",max);


    return 0;
}

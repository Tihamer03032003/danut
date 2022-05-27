#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a[100][100],min,l1,c1,c[100];
    int n,m,p=0;
    printf("\nIntroduceti nr de linii si de coloane ");
    scanf("%i %i",&n,&m);
    printf("%i %i",n,m);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%f",&a[i][j]);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            printf("%f",a[i][j]);
    min=a[0][0];
    l1=0;
    c1=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(min>a[i][j])
            {
                min=a[i][j];
                l1=i;
                c1=j;
            }

    if(min!=0)
    {
        printf("\nMinimul este %f si se afla pe linia %i si pe coloana %i \n",min,l1,c1);
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {
                if(fmodf(a[i][j],min)==0)
                {
                    c[p]=a[i][j];
                    p++;
                    printf("%f \n",c[p-1]);

                }
            }
    }
    else printf("\nMinimul este zero");


    return 0;
}

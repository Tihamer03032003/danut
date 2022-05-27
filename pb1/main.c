#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float a,f,p,max,ok;
    ok=0;
    printf("Introduceti marginea intervalului");
    scanf("%f",&a);
    p=0.1;
    float i=a*(-1);
    for(;i<a+p;i=i+p)
    {
        if(i>-1 && i<1)
            f=(sin(i)+cos(i))*7*i*i;
        else if(i>=1)
            f=sqrt(2*i+3*i*i);
        else f=(5*i+3)/(2*i*i-7);
        printf("\nValoarea lui p in x=%f este %f",i,f);
        if(ok==0)
        {
            max=f;
            ok=1;
        }
        if(max<f)
            max=f;
    }
    printf("\n Maximul este %f",max);
    return 0;
}

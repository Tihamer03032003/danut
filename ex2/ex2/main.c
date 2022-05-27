#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[50],v;
    int nrc=0,nrn=0;
    printf("\nintroduceti caracterul");
    v=getche();
    while(v!='.' && nrc<50)
    {
        c[nrc]=v;
        nrc++;
        if(v>='0' && v<='9')
            nrn++;
        printf("\n introduceti caracterul ");
        v=getche();
    }
    printf("s-au citit %i caractere si %i sunt cifre",nrc,nrn);
    return 0;
}

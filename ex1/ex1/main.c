#include <stdio.h>
#include <stdlib.h>

int main()
{
      int n,div,nr,af=1;
      char d;
      do
      {
      printf("\nintroduceti numarul ");
      scanf("%i",&n);
          div=1;
          nr=0;
          af=1;
          while(div<=n)
          {if(n%div==0)
            {
                if(af==1)
                {printf("\n divizorii numarului sunt ");
                af=0;
                }
                printf("%i,",div);
                nr++;
            }
            div++;
          }
          if(nr>2)
            printf("\nNumarul de divizori este %i",nr);
          else printf("\nNumarul este prim");
          printf("\ndoriti sa continuati cu alt numar?\n introduceti litera d pentru DA si orice altceva pentru nu ");
          d=getche();
      }while(d=='d' || d=='D');
    return 0;
}


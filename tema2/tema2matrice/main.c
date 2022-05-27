#include <stdio.h>
#include <stdlib.h>

void main()
{
 int n, b[10], a[10][10], i,j, min, Nmin,Smin;
 printf("Nr elemente ale sirului n<10");
 scanf("%d",&n);
 printf("Scrie elementele sirului");
 for(i=0; i<n; i++) {
    printf("\n b[%2d]=",i);
    scanf("%d", &b[i]);
 }
min=b[0];
for(i=0; i<n; i++)
if(b[i]<min) min=b[i];
for(i=0; i<n; i++)
    for(j=0;j<n;j++)
    if (i==j) a[i][j]=b[i];
else if(i<j) a[i][j]=min;
else a[i][j]=1;
for(i=0; i<n; i++){
    printf("\n");
    for(j=0; j<n; j++)
        printf("%10d", a[i][j]);
}
printf ("\nElementul minim: %d ",min);

}

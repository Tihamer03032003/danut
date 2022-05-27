
#include <iostream>
#include <math.h>
#define PI 3.1419

void main(){

        float x, y,A, B, AB, perimetru, ariaTriunghiuluiEchilateralDeLaturaAB, circumferinta, ariaCerculuiDeDiametruAB;
        printf("Introduceti coordonatele pentru A:");
        printf("\nA.x=");
        scanf("%d",&A.x);
        printf("A.y=");
        scanf("%d",&A.y);
        printf("\nIntroduceti coordonatele pentru B:");
        printf("\nB.x=");
        scanf("%d",&B.x);
        printf("B.y=");
        scanf("%d",&B.y);

    AB = sqrt(pow(B.x-A.x,2)+pow(B.y-A.y,2));
    perimetru = 3*AB;
    ariaTriunghiuluiEchilateralDeLaturaAB = pow(AB,2)*sqrt(3)/4;
    circumferinta = 2 * PI * AB;
    ariaCerculuiDeDiametruAB = PI * pow(AB,2);

    printf("\nDistanta=",Ab);
    printf("\nPerimetru=",perimetru);
    printf("\n Aria tringhiului echilateral de latura AB=",ariaTriunghiuluiEchilateralDeLaturaAB);
    printf("\nCircumferinta=",circumferinta);
    printf("\nAria cercului de diametru AB=",ariaCerculuiDeDiametruAB);

}


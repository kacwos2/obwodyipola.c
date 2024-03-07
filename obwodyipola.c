#include <stdio.h>

/* PROGRAM LICZĄCY OBWÓD I POLE DANEJ FIGURY
-najpier trzeba wybrac figurę (switch)[kwadrat, prostokąt, trójkąt, romb]
-potrzeba char[] areaOrPerimeter; char[] figure; double a; double b; double c; double h;
*/

void perimeterCalculations(){
    char[] figure;
    double a;
    double b;
    double c;
    double h; 

    printf("podaj figure(kwadrat, prostokat, trojkat, trapez): ");
    scanf("%s", &figure);

    switch(figure){
        case 'kwadrat':
            printf("Podaj A: ");
            scanf("%lf", &a);

            double kp = a*4;
            printf("Obwod kwadratu jest rowny: %lf", kp);
        case 'prostokat':
            printf("Podaj A: ");
            scanf("%lf", &a);
            printf("Podaj B: ");
            scanf("%lf", &b);

            double pp = (2*a)+(2*b);
            printf("Obwod prostokatu jest rowny: %lf", pp);
        case 'trojkat':
            printf("Podaj A: ");
            scanf("%lf", &a);

            double tp = 3*a;
            printf("Obwod trojkata jest rowny: %lf", tp); 
        case 'trapez':
            printf("Podaj A: ");
            scanf("%lf", &a);
            printf("Podaj B: ");
            scanf("%lf", &b);
            printf("Podaj C: ");
            scanf("%lf", &c);

            double tzp =  a+b+(2*c)
            printf("Obwod trapezu jest rowny: ", tzp);
    }
}

void areaCalculations(){
    printf("podaj figure(kwadrat, prostokat, trojkat, trapez): ");
    scanf("%s", &figure);

    switch(figure){
        case 'kwadrat':
            printf("Podaj A: ");
            scanf("%lf", &a);

            double kp = a**2;
            printf("Pole kwadratu jest rowny: %lf", kp);
        case 'prostokat':
            printf("Podaj A: ");
            scanf("%lf", &a);
            printf("Podaj B: ");
            scanf("%lf", &b);

            double pp = a*b;
            printf("Pole prostokatu jest rowny: %lf", pp);
        case 'trojkat':
            printf("Podaj A: ");
            scanf("%lf", &a);
            printf("Podaj h: ");
            scanf("%lf", &h);

            double tp = (a/2)*h;
            printf("Pole trojkata jest rowny: %lf", tp); 
        case 'trapez':
            printf("Podaj A: ");
            scanf("%lf", &a);
            printf("Podaj B: ");
            scanf("%lf", &b);
            printf("Podaj h: ");
            scanf("%lf", &h);

            double tzp =  ((a+b)*h)/2;
            printf("Pole trapezu jest rowny: ", tzp);
    } 
}

int main(){

    char[] areaOrPerimeter;

    printf("Podaj co chcesz obliczyc(pole, obwod): ");
    scanf("%s", &areaOrPerimeter);

    switch(areaOrPerimeter){
        case 'pole':
            areaCalculations();
        case 'obwod':
            perimeterCalculations();
    }

    return 0;
}
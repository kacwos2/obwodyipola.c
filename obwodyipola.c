#include <stdio.h>

void perimeterCalculations() {
    char figure[20];
    double a, b, c;

    printf("podaj figure(kwadrat, prostokat, trojkat, trapez): ");
    scanf("%s", figure);

    switch (figure[0]) {
        case 'k':
            printf("Podaj A: ");
            scanf("%lf", &a);

            double kp = a * 4;
            printf("Obwod kwadratu jest rowny: %lf\n", kp);
            break;
        case 'p':
            printf("Podaj A: ");
            scanf("%lf", &a);
            printf("Podaj B: ");
            scanf("%lf", &b);

            double pp = (2 * a) + (2 * b);
            printf("Obwod prostokatu jest rowny: %lf\n", pp);
            break;
        case 't':
            printf("Podaj A: ");
            scanf("%lf", &a);

            double tp = 3 * a;
            printf("Obwod trojkata jest rowny: %lf\n", tp);
            break;
        case 't':
            printf("Podaj A: ");
            scanf("%lf", &a);
            printf("Podaj B: ");
            scanf("%lf", &b);
            printf("Podaj C: ");
            scanf("%lf", &c);

            double tzp = a + b + (2 * c);
            printf("Obwod trapezu jest rowny: %lf\n", tzp);
            break;
        default:
            printf("Nieznana figura.\n");
    }
}

void areaCalculations() {
    char figure[20];
    double a, b, h;

    printf("podaj figure(kwadrat, prostokat, trojkat, trapez): ");
    scanf("%s", figure);

    switch (figure[0]) {
        case 'k':
            printf("Podaj A: ");
            scanf("%lf", &a);

            double kp = a * a;
            printf("Pole kwadratu jest rowny: %lf\n", kp);
            break;
        case 'p':
            printf("Podaj A: ");
            scanf("%lf", &a);
            printf("Podaj B: ");
            scanf("%lf", &b);

            double pp = a * b;
            printf("Pole prostokatu jest rowny: %lf\n", pp);
            break;
        case 't':
            printf("Podaj A: ");
            scanf("%lf", &a);
            printf("Podaj h: ");
            scanf("%lf", &h);

            double tp = (a / 2) * h;
            printf("Pole trojkata jest rowny: %lf\n", tp);
            break;
        case 't':
            printf("Podaj A: ");
            scanf("%lf", &a);
            printf("Podaj B: ");
            scanf("%lf", &b);
            printf("Podaj h: ");
            scanf("%lf", &h);

            double tzp = ((a + b) * h) / 2;
            printf("Pole trapezu jest rowny: %lf\n", tzp);
            break;
        default:
            printf("Nieznana figura.\n");
    }
}

int main() {
    char areaOrPerimeter[20];

    printf("Podaj co chcesz obliczyc(pole, obwod): ");
    scanf("%s", areaOrPerimeter);

    switch (areaOrPerimeter[0]) {
        case 'p':
            areaCalculations();
            break;
        case 'o':
            perimeterCalculations();
            break;
        default:
            printf("Nieprawidlowy wybor.\n");
    }

    return 0;
}

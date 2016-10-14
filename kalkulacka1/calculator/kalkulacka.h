#ifndef KALKULACKA_H_INCLUDED
#define KALKULACKA_H_INCLUDED

void calculate()
{
    float a,c;
    int d = 1;
    char b;
    printf("____________________________________________\n");
    printf("________________CALCULATOR__________________\n");
    printf("Zadajte cislo1: ");
    scanf("%f", &a);
    printf("Zadajte operaciu: ");
    scanf("%s", &b);
    printf("Zadajte cislo2: ");
    scanf("%f", &c);
    switch (b)
    {
    case '+':
        printf("%f + %f = %f\n", a, c, a + c);
        break;
    case '-':
        printf("%f - %f = %f\n", a, c, a - c);
        break;
    case 'x':
        printf("%f x %f = %f\n", a, c, a * c);
        break;
    case '/':
        printf("%f : %f = %f\n", a, c, a / c);
        break;
    default:
        printf("Zadali ste zlu operaciu.\n");
    }


}


#endif // KALKULACKA_H_INCLUDED

#include <stdio.h>

int main()
{
    float a,c;
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
            printf("%f + %f = %f", a, c, a + c);
            break;
        case '-':
            printf("%f - %f = %f", a, c, a - c);
            break;
        case 'x':
            printf("%f x %f = %f", a, c, a * c);
            break;
        case '/':
            printf("%f : %f = %f", a, c, a / c);
            break;
        default:
            printf("Zadali ste zlu operaciu.");
    }
}

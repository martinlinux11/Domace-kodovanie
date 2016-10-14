#include <stdio.h>
#include <stdlib.h>
#include "kalkulacka.h"

int main()
{
    int d = 1;
    while (d == 1){
        calculate();
        printf("Pokracovat[1]ano,[2]nie?: ");
        scanf("%i",&d);
        system("clear");
    }
    printf("*****************************************\n");
    printf("_______________DOVIDENIA_________________\n");
}

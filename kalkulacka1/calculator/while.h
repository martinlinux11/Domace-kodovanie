#ifndef WHILE_H_INCLUDED
#define WHILE_H_INCLUDED
void loop(){
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

#endif // WHILE_H_INCLUDED

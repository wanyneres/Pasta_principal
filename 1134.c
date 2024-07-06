#include <stdio.h>

int main (){

int alcool = 0;
int gasolina = 0;
int diesel = 0;
int fim = 4;
int combustivel;



do{
scanf("%d", &combustivel);

if(combustivel == 1){

    alcool++;
}

else if(combustivel == 2){
    gasolina++;
}

else if(combustivel == 3){
    diesel++;
}

}

while(combustivel != fim);

printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n", alcool);
printf("Gasolina: %d\n", gasolina);
printf("Diesel: %d\n", diesel);

    return 0;
}
#include <stdio.h>

int main (){

int testes;
int total;
int i;
char animal;
char rato = "R";
char coelho = "C";
char sapo = "R";

scanf("%d", &testes);
scanf("%d %s", &testes, &animal);

for(i = 0; i > testes; i++){
    if(animal == rato){
        total:
        printf("Total de ratos: %d\n", total);
    }
    else if(animal == coelho){
        total:
        printf("Total de coelhos: %d\n", total);
    }
    else if(animal == sapo){
        total:
        printf("Total de sapos: %d\n", total);
    }
    }

}

}
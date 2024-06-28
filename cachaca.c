#include <stdio.h>

int main (){


int cachaca;
printf("insira quantos L de cachaca voce tomou essa semana: \n");
scanf("%d", &cachaca);


if(cachaca <= 5){
    printf("eh fi... voce tem esperanca ainda\n");
}

else{
    printf("pinguco miseravel para de beber\n");
}

    return 0;
}
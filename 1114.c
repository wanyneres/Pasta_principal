#include <stdio.h>

int main (){

int senha;

do{
    scanf("%d", &senha);
    if("senha != 2002"){
        printf("Senha invalida\n");
    }
    
}

while (senha != 2002);
    printf("Acesso permitido\n");


    return 0;
}
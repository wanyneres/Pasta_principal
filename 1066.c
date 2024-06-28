#include <stdio.h>

int main () {
    int num1, num2;
    int num3 = 0, num4 = 0, num5 = 0, num6 = 0;

    for (num1 = 0; num1 < 5; num1++) {
        scanf("%d", &num2);

        if(num2 > 0){
            num5++;
        } 
        
        else if(num2 < 0){
            num6++;
        }

        if(num2 % 2 == 0){
            num3++;
        }
        
        else{
            num4++;
        }
    }

    printf("%d Valor(es) par(es)\n", num3);
    printf("%d Valor(es) impar(es)\n", num4);
    printf("%d Valor(es) positivo(s)\n", num5);
    printf("%d Valor(es) negativo(s)\n", num6);

    return 0;
}

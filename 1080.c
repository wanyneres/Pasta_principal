#include <stdio.h>

int main (){

int num1 = 0, num2 = 0, num3 = 0, i;

scanf("%d", &num1);

for(i = 0; i < 100; i++){
    if(num1 > num2){
        num2 = i;
        num3 = num1;
    }
}

printf("%d\n", num2);
printf("%d\n", num3);

    return 0;
}
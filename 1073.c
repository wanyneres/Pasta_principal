#include <stdio.h>

int main (){

int num, num2;
scanf("%d", &num2);

for(num = 1; num <= num2; num++){

    if(num % 2 == 0){
        printf("%d^2 = %d\n", num, num*num);
    }

}

    return 0;
}
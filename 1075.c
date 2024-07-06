#include <stdio.h>

int main (){

int N1;
int N2;

for(N1 = 0; N1 < 10000; N1++){
    scanf("%d", &N2);
    if(N1 % N2 == 2){
        printf("%d\n", N1);
    }

}

return 0;

    }
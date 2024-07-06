#include <stdio.h>

int main (){

int i = 0, div = 0;

scanf("%d", &div);

for(i = 0; i <= div; i++){
    if(div % i == 0){
        printf("%d\n", i);
    }
}


    return 0;
}
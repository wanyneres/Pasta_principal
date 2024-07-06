#include <stdio.h>

int main (){

int num, n;

scanf("%d", &num);

for(n = 1; n <= 10; n++){
    printf("%d x %d = %d\n", n, num, num*n);
}
    return 0;

}
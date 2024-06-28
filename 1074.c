int main() {
    int i, num1, num2;

    scanf("%d", &i);

    for (num1 = 0; num1 < i; num1++) {
    scanf("%d", &num2);

    if(num2 == 0){
    printf("NULL\n");
        } 
    else if(num2 % 2 == 0 && num2 > 0){
    printf("EVEN POSITIVE\n");
        } 
    else if(num2 % 2 == 0 && num2 < 0){
    printf("EVEN NEGATIVE\n");
        } 
    else if(num2 > 0){
    printf("ODD POSITIVE\n");
        } 
    else if(num2 < 0){
    printf("ODD NEGATIVE\n");
        }
    }

    return 0;
}

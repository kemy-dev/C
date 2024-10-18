#include<stdio.h>
int main() {
    int num1, num2;
    printf("Forneca dois numeros\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2){
        printf("Ordem decrescente\n");
    } else if (num2 > num1){
        
            printf("Ordem crescente\n");
        } else {
            printf("Numeros iguais\n");

    }
    return 0;
}
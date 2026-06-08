#include <stdio.h>
int main(){
    char nome[50];
    float salario, vendas;
    fgets(nome, sizeof(nome), stdin);
    scanf("%f %f", &salario, &vendas);
    printf("TOTAL = R$ %.2f", salario + (vendas*0.15));
}
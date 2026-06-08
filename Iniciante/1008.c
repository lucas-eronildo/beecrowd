#include <stdio.h>
int main(){
    int numero, horas;
    float salario;
    scanf("%d %d %f", &numero, &horas, &salario);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, horas*salario);
}
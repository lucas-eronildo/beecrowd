#include <stdio.h>
int main(){
    double raio;
    scanf("%lf", &raio);
    printf("VOLUME = %.3lf", (raio*raio*raio)*3.14159*(4.0/3));
}
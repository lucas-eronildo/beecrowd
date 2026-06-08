#include <stdio.h>
int main(){
    int cod1, cod2, n1, n2;
    float valu1, valu2;
    scanf("%d %d %f", &cod1, &n1, &valu1);
    scanf("%d %d %f", &cod2, &n2, &valu2);
    printf("VALOR A PAGAR: R$ %.2f\n", (n1*valu1) + (n2*valu2));
    return 0;
}
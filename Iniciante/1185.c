#include <stdio.h>
int main(){
    float M[12][12], soma = 0;
    char op;
    scanf(" %c", &op);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &M[i][j]);
        }
    }
    for(int i = 0; i < 11; i++){
        for(int j = 10 - i; j >= 0; j--){
            soma += M[i][j];
        }
    }
    switch(op){
        case 'S':
            printf("%.1f\n", soma);
        case 'M':
            printf("%.1f\n", soma/66);
    }
}
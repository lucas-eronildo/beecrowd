#include <stdio.h>
int main(){
    double M[12][12], soma = 0;
    char op;
    scanf(" %c", &op);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j <= 10-i; j++){
            soma += M[i][j];
        }
    }
    switch(op){
        case 'S':
            printf("%.1lf\n", soma);
        case 'M':
            printf("%.1lf\n", soma/30.0);
    }
}
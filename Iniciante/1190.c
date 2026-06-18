#include <stdio.h>

int main() {
    double M[12][12], soma = 0;
    char op;
    
    scanf(" %c", &op);
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    for(int i = 11; i > 6; i--){
        for(int j = 1 + (11-i); j < 11 - (11-i); j++){
            soma += M[j][i];
        }
    }
    
    switch(op){
        case 'S':
            printf("%.1lf\n", soma);
            break;
            
        case 'M':
            printf("%.1lf\n", soma / 30.0);
            break;
    }
    return 0;
}
#include <stdio.h>

int main(){

    int casaRainha = 1;
    int casaTorre = 1;
    int casaBispo = 1;
    int casaCavaloL = 1;

    //Rainha
    // movimento da Rainha oito casas para a esquerda
    printf("Movimento Rainha \n");
    while (casaRainha <= 8){
        printf("Esquerda \n");
        casaRainha++;
    }
    
    printf("\n");

    //Torre
    // movimento da Torre cinco casas para a direita
    printf("Movimento Torre \n");
    do{
       printf("Direita \n");

       casaTorre++;
    } while (casaTorre <= 5);

    printf("\n");
    
    //Bispo
    // movimento do Bispo cinco casas na diagonal para cima e à direita
    printf("Movimento Bispo \n");
    for (casaBispo = 1; casaBispo <= 5; casaBispo++){
        printf("Cima, Direita \n");
    };

    printf("\n");

    //Cavalo
    // movimento do Cavalo duas casas para baixo e uma casa para a esquerda
    printf("Movimento do Cavalo \n");
    while (casaCavaloL > 0){

        for (int casaCavaloHV = 1; casaCavaloHV <= 2; casaCavaloHV++){
            printf("Baixo \n");
        }
        
        printf("Esquerda \n");
        casaCavaloL--;
        
    }
    
    return 0;
}
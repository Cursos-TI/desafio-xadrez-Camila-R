#include <stdio.h>

int main(){

    int casaRainha = 1;
    int casaTorre = 1;
    int casaBispo = 1;

    //Rainha
    // movimento da Rainha oito casas para a esquerda
    printf("Movimento Rainha \n");
    while (casaRainha <= 8){
        printf("Esquerda \n");
        casaRainha++;
    }
    
    //Torre
    // movimento da Torre cinco casas para a direita
    printf("Movimento Torre \n");
    do{
       printf("Direita \n");

       casaTorre++;
    } while (casaTorre <= 5);
    
    //Bispo
    // movimento do Bispo cinco casas na diagonal para cima e à direita
    printf("Movimento Bispo \n");
    for (casaBispo = 1; casaBispo <= 5; casaBispo++){
        printf("Cima, Direita \n");
    }
    

    return 0;
}
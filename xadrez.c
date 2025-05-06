#include <stdio.h>

//Torre
void movimentoTorre(int casas){
    if (casas > 0){
        printf("Direita \n");
        movimentoTorre(casas - 1);
    }
    
}

//Rainha
void movimentoRainha(int casas){
    if (casas > 0){
        printf("Esquerda \n");
        movimentoRainha(casas - 1);
    }
    
}

//Bispo
void movimentoBispo(int casas){
    while (casas > 0){

        printf("Cima \n");

        for (int i = casas; i >= casas; i--){
            printf("Direita \n");
        }
        
        casas--;
    }
}

int main(){

    //Rainha
    // movimento da Rainha oito casas para a esquerda
    printf("Movimento Rainha \n");
    movimentoRainha(8);
    printf("\n");

    //Torre
    // movimento da Torre cinco casas para a direita
    printf("Movimento Torre \n");
    movimentoTorre(5);
    printf("\n");
    
    //Bispo
    // movimento do Bispo cinco casas na diagonal para cima e à direita
    printf("Movimento Bispo \n");
    movimentoBispo(5);
    printf("\n");

    //Cavalo
    // movimento do Cavalo duas casas para cima e uma casa para a direita
    printf("Movimento do Cavalo \n");
    for (int i = 0; i < 3; i++){

        if (i == 0){
            printf("Cima \n");
            continue;
        }         
        if (i == 1 || i == 2){
            printf("Direita \n");
            continue;
        } else{
            break;
        }
        

    }
    
    return 0;
}
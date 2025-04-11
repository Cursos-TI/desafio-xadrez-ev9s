#include <stdio.h>

int main(){
    //variáveis
    int torre = 1;
    int bispo = 1;
    int rainha = 1;

    //repetição da torre
    for(int torre; torre <= 5; torre++ ){
        printf("Torre: Direita.\n");
    }

    //repetição do bispo
    while(bispo <= 5){
        printf("Bispo: Cima, direita.\n");
        bispo++;
    }

    //repetição da rainha
    do
    {
        printf("Rainha: Esquerda.\n");
        rainha++;
    } while (rainha <= 8);
    
}

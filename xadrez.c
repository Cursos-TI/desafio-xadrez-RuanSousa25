#include <stdio.h>

int main(){
    int movimentacaoTorre, movimentacaoBispo, movimentacaoRainha;

    printf("Insira o número de movimentos da torre:\n");
    scanf("%d", &movimentacaoTorre);
    // Torre move 5 para a direita
    for (int i = 0; i < movimentacaoTorre; i++)
    {
        printf("Torre moveu para a direita\n", i);
    };

    printf("Insira o número de movimentos do bispo:\n");
    scanf("%d", &movimentacaoBispo);
    int j = 0;
    //Bispo move 5 na diagonal cima, direita
    while(j < movimentacaoBispo){
        printf("Bispo move para cima, direita\n");
        j++;
    };

    printf("Insira o número de movimentos da rainha:\n");
    scanf("%d", &movimentacaoRainha);
    int k = 0;
    //Rainha move 8 para esquerda
    do{
        printf("Rainha se move para esquerda\n");
        k++;
    } while (k < movimentacaoRainha);
}

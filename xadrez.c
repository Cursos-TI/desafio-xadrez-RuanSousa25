#include <stdio.h>

int main(){
    int movimentacaoTorre, movimentacaoBispo, movimentacaoRainha, movimentacaoCavalo;

    printf("Insira o número de movimentos da torre:\n");
    scanf("%d", &movimentacaoTorre);
    // Movimentaçao da torre
    for (int i = 0; i < movimentacaoTorre; i++)
    {
        printf("Torre moveu para a direita\n", i);
    };

    printf("Insira o número de movimentos do bispo:\n");
    scanf("%d", &movimentacaoBispo);
    int j = 0;
    //Movimentação do bispo
    while(j < movimentacaoBispo){
        printf("Bispo move para cima, direita\n");
        j++;
    };

    printf("Insira o número de movimentos da rainha:\n");
    scanf("%d", &movimentacaoRainha);
    int k = 0;
    //Movimentação da rainha
    do{
        printf("Rainha se move para esquerda\n");
        k++;
    } while (k < movimentacaoRainha);

    printf("Insira a quantidade de movimentos do cavalo:\n");
    scanf("%d", &movimentacaoCavalo);
    //Movimentação do cavalo
    for (int i = 0; i < movimentacaoCavalo; i++){
        int j = 0;
        do{
            printf("Cavalo move para cima\n");
            j++;
        } while (j < 2);
        int k = 0;
        while (k < 1)
        {
            printf("Cavalo move para a direita\n");
            k++;
        };
    }
}

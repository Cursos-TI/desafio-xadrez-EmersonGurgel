#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    /* Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
 
    Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
     
    Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
    
    Cavalo: deverá se mover duas casas para baixo e uma casa para a esquerda.

                                                                                                                    */

int torre = 1, rainha =  1, cavaloBaixo, cavaloEsquerda = 1, opcao; 


printf("**** Peça: Bispo ****\n\n");

for (int bispo = 1; bispo <= 5; bispo++)
{

printf("cima, direita\n");    
}
printf("\n\n");
////////////////////////////////////////////

printf("**** Peça: Rainha ****\n\n");
while (rainha <= 8)
{
 printf("Esquerda\n");
 rainha++;
}

///////////////////////////////////
printf("\n\n");
printf("**** Peça: torre ****\n\n");
do
{
 printf("Direita\n");
 torre++;
} while (torre <= 5);

printf("\n\n");
printf("**** Peça: Cavalo ****\n\n");

   

printf("escolha uma opção!\n");
printf("1. baixo, esquerda\n");
printf("2. baixo, direita\n");
scanf("%d", &opcao);

    switch(opcao){
    case 1:
    printf("1. Opção baixo, esquerda\n\n");
    break;
    case 2:
    printf("2. Opção baixo, direita\n\n");
    break;
    default:
    printf("opção inválida\n\n");
    break;
} 
if (opcao)
{
 if (opcao == 1)
 {
   for(cavaloBaixo = 1; cavaloBaixo <= 2; cavaloBaixo++){
    while(cavaloEsquerda <= 1){
        printf("esquerda\n");
        cavaloEsquerda++;
    }
    printf("baixo\n");
   }
 }else if (opcao == 2) {
    for(cavaloBaixo = 1; cavaloBaixo <= 2; cavaloBaixo++){
        while(cavaloEsquerda <= 1){
            printf("direita\n");
            cavaloEsquerda++;
        }
        printf("baixo\n");
    }
 }
 
}












/////////////////////////////






    return 0;

}
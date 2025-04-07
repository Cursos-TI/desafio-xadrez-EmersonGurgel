#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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


    /* Torre: 5 casas pra direita;
 
    Bispo: 5 casas pra diagonal "direita cima"
     
    Rainha: 8 casas pra esquerda
    
    Cavalo: 2 casas pra cima e 1 pra direita em L
*/

//recursividade para a o movimento da carta: torre;
//decrementa -1 até que o valor variável "casas" seja maior que 0;
void movimentoTorre(int casas){
    if(casas > 0){
        printf("direita\n");
        movimentoTorre(casas - 1);
    }
}
//recursividade para a o movimento da carta: bispo;
//decrementa -1 até que o valor da variável "casas" seja maior que 0;
void movimentoBispo(int casas){
    if(casas > 0){
        printf("direita, cima\n");
        
        movimentoBispo(casas - 1);
    }
}

//recursividade para a o movimento da carta: rainha;
//decrementa -1 até que o valor da variável "casas" seja maior que 0;
void movimentoRainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}

int main() {
 
    // apresenta a carta;
printf("Peça torre:\n\n");

//chama a recursividade "void" da carta selcionada " "abaixo;
movimentoTorre(5);

//pular duas linhas;
printf("\n\n");




// apresenta a carta
printf("Peça Bispo:\n\n");

//chama a recursividade "void" da carta selcionada " "abaixo
movimentoBispo(5);

//pular duas linhas;
printf("\n\n");



// apresenta a carta
printf("Peça rainha:\n\n");

//chama a recursividade "void" da carta selcionada " "abaixo
movimentoRainha(8);

//pular duas linhas;
printf("\n\n");

// apresenta a carta
printf("Peça Bispo:\n\n");


//Loop aninhado com FOR e DO WHILE;
int movibispo = 0; //variável do DO WHILE;
for(int i = 0; i < 5; i++){ // (variável; condição; incremento do FOR;
printf("direita\n"); //impressão do FOR;
do{
printf("cima\n"); //impressão do DO WHILE;
movibispo++; // imcremento do DO WHILE;
} while (movibispo < i); //condição do DO WHILE;

}

//pular duas linhas;
printf("\n\n");


printf("Peça cavalo:\n\n");

for(int i = 0; i < 1; i++) // (variável; condição; incremento do FOR externo;
{
    for(int j = 0; j < 2; j++) // (variável; condição; incremento do FOR interno;
    {
    printf("cima\n"); // impressão do FOR externo;
    }
    printf("direita\n"); // impressão do FOR interno;
    
}

return 0;
}






 
 
 /* int torre = 1, rainha =  1, cavaloBaixo, cavaloEsquerda = 1, opcao; 


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


    */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Versao 2 do game advinhação 
//criando uma mensagem inicial 
//definir as variaveis
//Criar o laço de tentativas com as verificações

int main() {
  //Mensagem de boas vindas 
  printf("Seja bem vindo ao jogo de adivinhação");

  // gerando um numero secreto aleatorio
  int segundos = time(0);
  srand(segundos);

  int numero = rand();
  int numeroSecreto = numero % 100;
  int chute;
  int ganhou = 0;
  int tentativas = 1;

  //Construido o loop de repetição
  while(ganhou == 0) {
    printf("----Tentativa %d----\n", tentativas);
    printf("Digite seu chute: ");
    scanf(" %d", &chute);
    printf("Seu chute foi %d\n", chute);

    int acertou = chute == numeroSecreto;
    int maior = chute > numeroSecreto;

    //Verificando os valores do chute
    if(acertou){
      printf("\nParabéns! Você acertou!\n");
      ganhou = 1;
    }
    else if(maior){
      printf("Seu chute foi maior\n");
    }
    else{
      printf("Seu chute foi menor\n");
    }
    tentativas++;
  }
  return 0;
}
/* 
 * File:   pilha.h
 * Author: Eugenio Cunha
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "celula.h"
#include "pilha.h"

//Inicia uma pilha vazia

void inicia_pilha(pilha *pilha){
    pilha->topo = (ponteiro_celula)malloc(sizeof(celula));
    pilha->fundo = pilha->topo;
    pilha->topo->proximo = NULL;
}

//Testa se uma pilha está vazia

bool pilha_vazia(pilha pilha){
    return (pilha.fundo == pilha.topo);
}

//Empilha uma celula sobre a pilha

void empilha(pilha *pilha, aluno dados){
    ponteiro_celula auxiliar;
    auxiliar = (ponteiro_celula)malloc(sizeof(celula));
    pilha->topo->dados = dados;
    auxiliar->proximo = pilha->topo;
    pilha->topo = auxiliar;
    //free(auxiliar);
}

//Desempilha uma celula da pilha

void desempilha(pilha *pilha, aluno *dados){  
  if (pilha_vazia(*pilha)) { 
      printf("Erro: A pilha está vazia\n"); 
      return; 
  }
  ponteiro_celula auxiliar;
  auxiliar = pilha->topo;
  pilha->topo = auxiliar->proximo;
  *dados = auxiliar->proximo->dados;
  free(auxiliar); 
}

//Imprime a pilha

void imprime_pilha(pilha *pilha) {
    ponteiro_celula auxiliar;
    printf("Imprime a pilha\n");
    for(auxiliar = pilha->topo->proximo; auxiliar != NULL; auxiliar=auxiliar->proximo){
        printf("--------------------------------\nCIU: %d\nNome: %s\nE-mail: %s\n",
                auxiliar->dados.CIU, auxiliar->dados.nome, auxiliar->dados.email);
    }
    free(auxiliar);
}

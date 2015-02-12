/* 
 * File:   fila.h
 * Author: Eugenio Cunha
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "celula.h"
#include "fila.h"

//Inicia a fila criando a primeira celula

void inicia_fila(fila *fila) {
    fila->primeiro = (ponteiro_celula) malloc(sizeof (celula));
    fila->ultimo = fila->primeiro;
    fila->primeiro->proximo = NULL;
}

//Testa se a fila está vazia.

bool fila_vazia(fila fila) {
    return (fila.primeiro == fila.ultimo);
}

//Insere o item "dados" no final da fila

void enfileira(fila *fila, aluno dados) {
    fila->ultimo->proximo = (ponteiro_celula) malloc(sizeof (celula));
    fila->ultimo = fila->ultimo->proximo;
    fila->ultimo->dados = dados;
    fila->ultimo->proximo = NULL;
}

void desenfileira(fila *fila, aluno *dados) {
    if (fila_vazia(*fila)) {
        printf("ERRO: A fila esta vazia\n");
        return;
    }
    ponteiro_celula auxiliar;
    auxiliar = fila->primeiro;
    fila->primeiro = fila->primeiro->proximo;
    *dados = fila->primeiro->dados;
    free(auxiliar);
}

//Imprimi a fila

void imprimi_fila(fila *fila) {
    ponteiro_celula auxiliar;
    printf("Imprime a fila\n");
    for (auxiliar = fila->primeiro->proximo; auxiliar != NULL; auxiliar = auxiliar->proximo) {
        printf("--------------------------------\nCIU: %d\nNome: %s\nE-mail: %s\n",
                auxiliar->dados.CIU, auxiliar->dados.nome, auxiliar->dados.email);
    }
    free(auxiliar);
}
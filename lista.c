/* 
 * File:   lista.h
 * Author: Eugenio Cunha
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "celula.h"
#include "lista.h"

//Inicia uma lista vazia

void inicia_lista(lista *lista) {
    lista->primeiro = (ponteiro_celula) malloc(sizeof (celula));
    lista->ultimo = lista->primeiro;
    lista->primeiro->proximo = NULL;
}

//Testa se uma lista está vazia

bool lista_vazia(lista lista) {
    return (lista.primeiro == lista.ultimo);
}

//Insere uma celula a lista

void insere(lista *lista, aluno dados) {
    lista->ultimo->proximo = (ponteiro_celula) malloc(sizeof (celula));
    lista->ultimo = lista->ultimo->proximo;
    lista->ultimo->dados = dados;
    lista->ultimo->proximo = NULL;
}

//Retira uma celula da lista 

void retira(lista *lista, aluno *dados, ponteiro_celula posicao) {
    if (lista_vazia(*lista) || posicao == NULL || posicao->proximo == NULL) {
        printf("ERRO: A lista esta vazia ou a posição nao existe\n");
        return;
    }
    ponteiro_celula auxiliar;
    auxiliar = posicao->proximo;
    *dados = auxiliar->dados;
    posicao->proximo = auxiliar->proximo;
    if (posicao->proximo == NULL) {
        lista->ultimo = posicao;
    }
    free(auxiliar);
}

//Imprime a lista

void imprime_lista(lista *lista) {
    ponteiro_celula auxiliar;
    printf("Imprime a lista\n");
    for (auxiliar = lista->primeiro->proximo; auxiliar != NULL; auxiliar = auxiliar->proximo) {
        printf("--------------------------------\nCIU: %d\nNome: %s\nE-mail: %s\n",
                auxiliar->dados.CIU, auxiliar->dados.nome, auxiliar->dados.email);
    }
    free(auxiliar);
}
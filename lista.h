/* 
 * File:   lista.h
 * Author: Eugenio Cunha
 *
 */

#include <stdbool.h>
#include "celula.h"

#ifndef LISTA_H
#define	LISTA_H

typedef struct _lista{
    ponteiro_celula primeiro;
    ponteiro_celula ultimo;
} lista;

void inicia_lista(lista *lista);
bool lista_vazia(lista lista);
void insere(lista *lista, aluno dados);
void retira(lista *lista, aluno *dados, ponteiro_celula posicao);
void imprime_lista(lista *lista);

#endif	/* LISTA_H */


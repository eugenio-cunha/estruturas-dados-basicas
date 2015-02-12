/* 
 * File:   pilha.h
 * Author: Eugenio Cunha
 *
 */

#include <stdbool.h>
#include "celula.h"

#ifndef PILHA_H
#define	PILHA_H

typedef struct _pilha{
    ponteiro_celula fundo;
    ponteiro_celula topo;
} pilha;

void inicia_pilha(pilha *pilha);
bool pilha_vazia(pilha pilha);
void empilha(pilha *pilha, aluno dados);
void desempilha(pilha *pilha, aluno *dados);
void imprime_pilha(pilha *pilha);

#endif	/* PILHA_H */


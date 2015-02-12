/* 
 * File:   fila.h
 * Author: Eugenio Cunha
 *
 */

#include <stdbool.h>
#include "celula.h"

#ifndef FILA_H
#define	FILA_H

//Modelo de fila

typedef struct _fila {
    ponteiro_celula primeiro;
    ponteiro_celula ultimo;
} fila;

void inicia_fila(fila *fila);
bool fila_vazia(fila fila);
void enfileira(fila *fila, aluno dados);
void desenfileira(fila *fila, aluno *dados);
void imprimi_fila(fila *fila);

#endif	/* FILA_H */


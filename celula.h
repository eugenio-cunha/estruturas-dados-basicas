/* 
 * File:   celula.h
 * Author: Eugenio Cunha
 *
 */

#ifndef CELULA_H
#define	CELULA_H

//Modelo aluno
typedef struct _aluno {
    int CIU;
    char nome[100];
    char email[100];
} aluno;

//Ponteiro para celula

typedef struct _celula *ponteiro_celula;

//Modelo da celula: fila, lista e pilha.   

typedef struct _celula {
    aluno dados;
    ponteiro_celula proximo;
} celula;

#endif	/* CELULA_H */


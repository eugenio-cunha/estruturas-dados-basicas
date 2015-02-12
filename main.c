/* 
 * File:   main.c
 * Author: Eugenio Cunha
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "celula.h"
#include "lista.h"
#include "pilha.h"
#include "fila.h"

int main(int argc, char** argv) {

    aluno dados;
    fila exemplo_fila;
    pilha exemplo_pilha;
    lista exemplo_lista;

    int i, opcao, itens;

    //Seleciona o tipo de estrutura de dados
    do {
        printf("Estrutura de dados basica\n"
                "[1] Lista\n[2] Pilha\n[3] Fila\n\nSelecione uma opcao: ");
        scanf("%d", &opcao);
        system("clear");
    } while (opcao < 1 || opcao > 3);

    
    if (opcao == 1){
        inicia_fila(&exemplo_fila);
    } else if (opcao == 2){
        inicia_pilha(&exemplo_pilha);
    } else {
        inicia_lista(&exemplo_lista);
    }
    
    do{
        printf("Digite a quantidade de itens de 1 a 10: ");
        scanf("%d", &itens);
        system("clear");
    } while(itens < 1 || itens > 10);
    

    for (i = 0; i < itens; i++) {
        printf("Digite o CIU: ");
        scanf("%d", &dados.CIU);
        system("clear");

        printf("Digite o nome: ");
        scanf("%s", &dados.nome);
        system("clear");

        printf("Digite o e-mail: ");
        scanf("%s", &dados.email);
        system("clear");

        if (opcao == 1) {
            enfileira(&exemplo_fila, dados);
        } else if (opcao == 2) {
            empilha(&exemplo_pilha, dados);
        } else {
            insere(&exemplo_lista, dados);
        }       
    }
    if (opcao == 1) {
            imprimi_fila(&exemplo_fila);
        } else if (opcao == 2) {
            imprime_pilha(&exemplo_pilha);
        } else {
            imprime_lista(&exemplo_lista);
        } 

    return (EXIT_SUCCESS);
}


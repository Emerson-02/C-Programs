/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 07 / EXERCÍCIO a

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <Preencher uma matriz 10x10 com números inteiros aleatorios entre 10 e 99 e realizar trocas entre linhas, colunas e diagonais>
*/
#include<stdio.h>
#include<stdlib.h>
#define LINHA 10
#define COLUNA 10
#define MIN 10
#define MAX 99

int main() {
    // DEFINIÇÃO DE MATRIZES
    int matriz_Ori[LINHA][COLUNA];
    int matriz_result[LINHA][COLUNA];
    // DEFINIÇÃO DE VETORES
    int linha2[LINHA];
    int linha8[LINHA];
    int linha5[LINHA];
    int coluna4[COLUNA];
    int coluna10[COLUNA];
    int diagonal_princ[LINHA];
    int diagonal_sec[LINHA];
    // DEFINIÇÃO DE VARIÁVEIS
    int aleatorio, l, c;
    srand(time(NULL));

    // MATRIZ ORIGINAL
    printf("Matriz Original: \n");
    for(l = 0; l < LINHA; l++){
        for(c = 0; c < COLUNA; c++){
            // ADICIONA UM NÚMERO ALEATÓRIO À MATRIZ ORIGINAL
            aleatorio = MIN + (rand() % (MAX - MIN + 1));
            matriz_Ori[l][c] = aleatorio;
            printf(" %d ", matriz_Ori[l][c]);
    }
    printf("\n");
    }
    printf("\n");

    // LINHA 2
    for(c = 0; c < COLUNA; c++){
            linha2[c] = matriz_Ori[1][c];
    }

    // LINHA 8
    for(c = 0; c < COLUNA; c++){
            linha8[c] = matriz_Ori[7][c];
    }

    // LINHA 5
    for(c = 0; c < COLUNA; c++){
            linha5[c] = matriz_Ori[4][c];
    }

    // COLUNA 4
    for(l = 0; l < LINHA; l++){
            coluna4[l] = matriz_Ori[l][3];
    }

    // COLUNA 10
    for(l = 0; l < LINHA; l++){
            coluna10[l] = matriz_Ori[l][9];
    }

    // DIAGONAL PRINCIPAL
        for(l = 0; l < LINHA; l++){
            diagonal_princ[l] = matriz_Ori[l][l];
    }

    // DIAGONAL SECUNDÁRIA
        for(l = 0; l < LINHA; l++){
            diagonal_sec[l] = matriz_Ori[l][LINHA - 1 - l];
    }

    //MATRIZ RESULTANTE
    printf("Matriz Resultante: \n");
    for(l = 0; l < LINHA; l++){
        for(c = 0; c < COLUNA; c++){
                if(l == 7){
                    // TROCA A LINHA 8 PELA LINHA 2
                    matriz_result[7][c] = linha2[c];
                } else if(l == 1){
                    // TROCA A LINHA 2 PELA LINHA 8
                    matriz_result[1][c] = linha8[c];
                } else if(c == 9){
                    // TROCA A COLUNA 10 PELA COLUNA 4
                    matriz_result[l][9] = coluna4[l];
                } else if(c == 3){
                    // TROCA A COLUNA 4 PELA COLUNA 10
                    matriz_result[l][3] = coluna10[l];
                } else if(l == 4){
                    // TROCA A LINHA 5 PELA COLUNA 10
                    matriz_result[4][c] = coluna10[c];
                } else if(l == c){
                    // TROCA A DIAGONAL PRINCIPAL PELA DIAGONAL SECUNDÁRIA
                    matriz_result[l][c] = diagonal_sec[l];
                } else if(l + c == 9){
                    // TROCA A DIAGONAL SECUNDÁRIA PELA DIAGONAL PRINCIPAL
                    matriz_result[l][c] = diagonal_princ[l];
                }else {
                    matriz_result[l][c] = matriz_Ori[l][c];

                }
        printf(" %d ", matriz_result[l][c]);
    }
    printf("\n");
    }

    return 0;
}

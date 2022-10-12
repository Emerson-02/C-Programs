/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 07 / EXERCÍCIO b

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <preenche uma matriz 4x7 com números inteiros aleatórios entre -10 e 10 e mostra seu MINMAX>
*/
#include<stdio.h>
#include<stdlib.h>
#define LINHA 4
#define COLUNA 7
#define MIN -10
#define MAX 10

int main() {
    // DEFINIÇÃO DA MATRIZ
    int matriz[LINHA][COLUNA];
    // DEFINIÇÃO DO VETOR
    int vetor_menor[COLUNA];
    // DEFINIÇÃO DAS VARIÁVEIS
    int MINMAX;
    int maior, menor = 0, l, c, aleatorio;
    srand(time(NULL));

    // MATRIZ
    printf("Matriz: \n");
    for(l = 0; l < LINHA; l++){
        for(c = 0; c < COLUNA; c++){
            aleatorio = MIN + (rand() % (MAX - MIN + 1));
            matriz[l][c] = aleatorio;
            printf(" %2d ", matriz[l][c]);
    }
    printf("\n");
    }

    // ACHANDO O MENOR NÚMERO DA MATRIZ
    for(l = 0; l < LINHA; l++){
        for(c = 0; c < COLUNA; c++){
            if(matriz[l][c] < menor){
                menor = matriz[l][c];
                for(c = 0; c < COLUNA; c++){
                    vetor_menor[c] = matriz[l][c];
                }
            }
        }
    }

    // ACHANDO O MAIOR NÚMERO DA LINHA DO MENOR NÚMERO DA MATRIZ
    for(c = 0; c < COLUNA; c++){
        if(vetor_menor[c] > MINMAX){
            MINMAX = vetor_menor[c];
        }
    }


    printf("\nO elemento MINMAX eh %d.\n", MINMAX);


    return 0;
}

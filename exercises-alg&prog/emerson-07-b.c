/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMA��O

    ATIVIDADE PR�TICA
    SEMANA 07 / EXERC�CIO b

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATR�CULA: 2021/1

    <preenche uma matriz 4x7 com n�meros inteiros aleat�rios entre -10 e 10 e mostra seu MINMAX>
*/
#include<stdio.h>
#include<stdlib.h>
#define LINHA 4
#define COLUNA 7
#define MIN -10
#define MAX 10

int main() {
    // DEFINI��O DA MATRIZ
    int matriz[LINHA][COLUNA];
    // DEFINI��O DO VETOR
    int vetor_menor[COLUNA];
    // DEFINI��O DAS VARI�VEIS
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

    // ACHANDO O MENOR N�MERO DA MATRIZ
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

    // ACHANDO O MAIOR N�MERO DA LINHA DO MENOR N�MERO DA MATRIZ
    for(c = 0; c < COLUNA; c++){
        if(vetor_menor[c] > MINMAX){
            MINMAX = vetor_menor[c];
        }
    }


    printf("\nO elemento MINMAX eh %d.\n", MINMAX);


    return 0;
}

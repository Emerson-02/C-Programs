/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMA��O

    ATIVIDADE PR�TICA
    SEMANA 06 / EXERC�CIO a

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATR�CULA: 2021/1

    < Preenche um vetor de 10 posi�oes com n�meros aleat�rios entre 100 e 1000, e um
    segundo vetor de 5 posi�oes com n�meros aleat�rios entre 1 e 10, e depois, imprime os dois vetores, e
    mostra uma lista dos n�meros do primeiro vetor com seus respectivos divisores armazenados
    no segundo vetor, bem como suas posi�oes. >
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define TAMANHO_1 10
#define TAMANHO_2 5
#define MIN_1 100
#define MAX_1 1000
#define MIN_2 1
#define MAX_2 10

int main() {
    // DECLARA��O DOS VETORES
    int vetor_1[TAMANHO_1];
    int vetor_2[TAMANHO_2];
    // DECLARA��O DAS V�RIAVEIS
    int aleatorio, i, j;
    srand(time(NULL));


    for(i = 0; i < TAMANHO_1; i++){
        aleatorio = MIN_1 + (rand() % (MAX_1 - MIN_1 + 1));
        vetor_1[i] = aleatorio;

    }

    printf("Vetor 1 [");

    for(i = 0; i < TAMANHO_1; i++){
        printf(" %d ", vetor_1[i]);
    }
    printf("]\n");

    for(i = 0; i < TAMANHO_2; i++){
        aleatorio = MIN_2 + (rand() % (MAX_2 - MIN_2 + 1));
        vetor_2[i] = aleatorio;

    }

    printf("Vetor 2 [");

    for(i = 0; i < TAMANHO_2; i++){
        printf(" %d ", vetor_2[i]);
    }
    printf("]\n");

    for(i = 0; i < TAMANHO_1; i++){
        printf("\nNumero %d\n", vetor_1[i]);
        for(j = 0; j < TAMANHO_2; j++){
            if(vetor_1[i] % vetor_2[j] == 0){
                printf("Divisivel por %d na posicao %d\n", vetor_2[j], j);
        }

        }
        if(vetor_1[i] % vetor_2[0] != 0 && vetor_1[i] % vetor_2[1] != 0 && vetor_1[i] % vetor_2[2] != 0 && vetor_1[i] % vetor_2[3] != 0){
                printf("Nao possui divisores no segundo vetor\n");
        }
    }


    return 0;
}

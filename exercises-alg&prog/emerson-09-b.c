/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMA��O

    ATIVIDADE PR�TICA
    SEMANA 09 / EXERC�CIO b

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATR�CULA: 2021/1

    <Dois dados com valores de 1 a 6 s�o lan�ados. Se a soma for 7 ou 11 na primeira jogada, o jogador vence.
     Se a soma for 2, 3 ou 12 na primeira jogada, o jogador perde. Se a soma for 4, 5, 6, 8, 9 ou 10 na primeira jogada,
     ent�ao a soma se torna o 'ponto' do jogador. Para vencer, o jogador precisa continuar lan�ando os dados at� que fa�a seu
    'ponto' novamente. O jogador perde lan�ando um 7 antes de fazer o ponto.>
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MIN 1
#define MAX 6

int jogaDados();
void lancou(int a, int b, int soma);

int main(){
    // DECLARA��O DAS VARI�VEIS
    int a, b, soma, ponto, a2, b2, status;
    srand(time(NULL));
    a = jogaDados();
    b = jogaDados();
    soma = a + b;
    lancou(a, b, soma);
    // SE A SOMA DAS FACES DOS DADOS FOR 7 OU 11
    if(soma == 7 || soma == 11){
        // JOGADOR VENCE
        printf("Jogador vence\n");
    }
    // SE A SOMAS DAS FACES DOS DADOS FOR 2, 3 OU 12
    else if(soma == 2 || soma == 3 || soma == 12){
        // JOGADOR PERDE
        printf("Jogador perde\n");
    }
    // SEN�O
    else {
        // GUARDA A SOMA NA VARI�VEL PONTO
        ponto = soma;
        printf("O Ponto do jogador eh %d\n", ponto);
        //ENQUANTO STATUS FOR DIFERENTE DE 7
        do {
            a2 = jogaDados();
            b2 = jogaDados();
            soma = a2 + b2;
            lancou(a2, b2, soma);
            // SE A SOMA FOR IGUAL � PONTO
            if(soma == ponto){
                // JOGADOR VENCE
                printf("Jogador vence\n");
                // STATUS RECEBE O VALOR 7
                status = 7;
            } else if(soma == 7){
                // STATUS RECEBE 7
                status = 7;
                // JOGADOR PERDE
                printf("Jogador perde\n");
            }
        } while(status != 7);
    }
    return 0;
}

int jogaDados(){
	// RETORNA UM N�MERO ALEAT�RIO ENTRE 1 E 6
	return (MIN + (rand() % (MAX - MIN + 1)));
}

void lancou(int a, int b, int soma){
    // IMPRIME A JOGADA E A SOMA DOS DADOS
    printf("Jogador lancou %d + %d = %d\n", a, b, soma);
    return;
}

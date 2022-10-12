/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMA��O

    ATIVIDADE PR�TICA
    SEMANA 05 / EXERC�CIO a

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATR�CULA: 2021/1

    <INFORMA A SOMA DOS N�MEROS PRIMOS DE UM INTERVALO DE DOIS N�MEROS PASSADOS PELO USU�RIO>
*/
#include<stdio.h>
#include<math.h>

int main() {
    //DEFINI��O DAS VARI�VEIS
    int x, y, i, j, flag, troca, soma = 0;

    do {
        printf("Informe os valores x e y: ");
        scanf("%d %d", &x, &y);
        if(x < 0){
            printf("Valores invalidos! Informe novamente...\n\n");
    }
        }while(x < 1);

    //SE X FOR MAIOR QUE Y, OS DOIS TROCAM OS VALORES
    if (x > y){
        troca = x;
        x = y;
        y = troca;
    }

    // SE X FOR MENOR OU IGUAL A UM, AUMENTA 1
    if(x <= 1){
        x++;
    }

    for(i = x;i < y;i++){
        flag = 1;
        for(j = 2;j < i;j++){
             if(i%j == 0){
                flag = 0;
            }
        }
        if(flag){
            soma += i;
        }
    }
    printf("A soma dos primos entre 1 e 10 eh %d\n", soma);

    return 0;
}


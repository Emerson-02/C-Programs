/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 04 / EXERCÍCIO b

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <lÊ OS HORÁRIOS DE ENTRADA E SAÍDA DE CADA FUNCIONÁRIO, DIZ QUANTOS MINUTOS CADA UM TRABALHOU EM UM DIA, QUANTOS MINUTOS EXTRAS FORAM TRABALHADOS(SE FOR O CASO) E MOSTRA AS SOMAS DO TOTAL DE MINUTOS TRABALHADOS E TOTAL DE MINUTOS EXTRAS DE TODOS OS FUNCIONÁRIOS.>
*/
#include<stdio.h>
#include<math.h>

int main(){
    float horEnt1, horSai1, minEnt1, minSai1, primTurn, segTurn, horEnt2, horSai2, minEnt2, minSai2, total, extra, somatotal, somaextra;  // DECLARAÇÃO DAS VARIÁVEIS
    int a;

    for (a = 1; a <=5 ; a++){
        printf("Funcionario %d:", a);
        printf("\nInforme o horario de entrada e saida do primeiro turno: "); //PEDE OS HORÁRIOS DE ENTRADA E SAÍDA DE UM FUNCIONÁRIO NO PRIMEIRO TURNO
        scanf("%f %f %f %f", &horEnt1, &minEnt1, &horSai1, &minSai1);
        primTurn = ((horSai1 - horEnt1) * 60) + minSai1 - minEnt1;

        printf("Informe o horario de entrada e saida do segundo turno: "); //PEDE OS HORÁRIOS DE ENTRADA E SAÍDA DE UM FUNCIONÁRIO NO SEGUNDO TURNO
        scanf("%f %f %f %f", &horEnt2, &minEnt2, &horSai2, &minSai2);
        segTurn = ((horSai2 - horEnt2) * 60) + minSai2 - minEnt2;

        total = primTurn + segTurn;  //TOTAL DE MINUTOS TRABALHADOS DE UM FUNCIONÁRIO POR DIA


        if (total <= 480){
            printf("\nTotal de minutos trabalhados pelo funcionario %d: %.0f minutos\n\n", a, total);
        } else if (total > 480){
            extra = total - 480;
            printf("\nTotal de minutos trabalhados pelo funcionario %d: %.0f minutos (%.0f minutos extras)\n\n", a, total, extra);
        }
        somatotal += total;
        somaextra += extra;
    }



    printf("\nTOTAL DE MINUTOS TRABALHADOS: %.0f minutos\n", somatotal); //TOTAL DE MINUTOS TRABALHADOS CONTANDO TODOS OS FUNCIONÁRIOS
    printf("\nMINUTOS EXTRAS QUE FORAM TRABALHADOS: %.0f minutos\n", somaextra); //TOTAL DE MINUTOS EXTRAS TRABALHADOS CONTANDO TODOS OS FUNCIONÁRIOS

    return 0;
}

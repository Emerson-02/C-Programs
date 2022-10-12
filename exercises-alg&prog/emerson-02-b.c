/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMA��O

    ATIVIDADE PR�TICA
    SEMANA 02 / EXERC�CIO b

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATR�CULA: 2021/1

    <L� O PESO DO SACO DE RA��O EM KG E QUANTO DE RA��O CADA GATO RECEBE POR
     DIA EM GRAMAS E CALCULA QUANTO SOBRAR� DE RA��O NO SACO AP�S 5 DIAS>
*/

#include<stdio.h>

int main(){
    int pesoRacao;
    float gatoA, gatoB, totalRacao;
    printf("Informe o peso do saco de racao (em Kg): "); // PEDE O PESO DO SACO DE RA��O
    scanf("%d", &pesoRacao);
    printf("Informe a quantidade de racao diaria fornecida a cada gato (em gramas): ");  // PEDE A QUANTIDADE DE RA��O EM GRAMAS QUE CADA GATO RECEBE
    scanf("%f %f", &gatoA, &gatoB);
    totalRacao = pesoRacao - (((gatoA / 1000) + (gatoB / 1000)) * 5);  // C�LCULO PARA DESCOBRIR QUANTO SOBRAR� DE RA��O AP�S 5 DIAS
    printf("\nApos 5 dias restarao no saco %.1f Kg de racao\n", totalRacao); // MOSTRA QUANTO SOBRAR� DE RA��O AP�S 5 DIAS

    return 0;
}

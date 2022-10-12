/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 02 / EXERCÍCIO b

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <LÊ O PESO DO SACO DE RAÇÃO EM KG E QUANTO DE RAÇÃO CADA GATO RECEBE POR
     DIA EM GRAMAS E CALCULA QUANTO SOBRARÁ DE RAÇÃO NO SACO APÓS 5 DIAS>
*/

#include<stdio.h>

int main(){
    int pesoRacao;
    float gatoA, gatoB, totalRacao;
    printf("Informe o peso do saco de racao (em Kg): "); // PEDE O PESO DO SACO DE RAÇÃO
    scanf("%d", &pesoRacao);
    printf("Informe a quantidade de racao diaria fornecida a cada gato (em gramas): ");  // PEDE A QUANTIDADE DE RAÇÃO EM GRAMAS QUE CADA GATO RECEBE
    scanf("%f %f", &gatoA, &gatoB);
    totalRacao = pesoRacao - (((gatoA / 1000) + (gatoB / 1000)) * 5);  // CÁLCULO PARA DESCOBRIR QUANTO SOBRARÁ DE RAÇÃO APÓS 5 DIAS
    printf("\nApos 5 dias restarao no saco %.1f Kg de racao\n", totalRacao); // MOSTRA QUANTO SOBRARÁ DE RAÇÃO APÓS 5 DIAS

    return 0;
}

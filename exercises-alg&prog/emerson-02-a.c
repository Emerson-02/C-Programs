/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 02 / EXERCÍCIO a

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <LÊ 3 VALORES E CALCULA A ÁREA DO TRIÂNGULO SEGUINDO A FÓRMULA DE HERON>
*/

#include<stdio.h>
#include<math.h>  // INCLUI FUNÇÕES MATEMÁTICAS NO PROGRAMA

int main(){
    float a, b, c, s, area;  // DEFINIÇÃO DAS VARIÁVEIS

    printf("Informe os lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;  // CÁLCULO DO SEMI-PERÍMETRO
    area = sqrt(s * (s - a) * (s - b) * (s - c));  // CÁLCULO DA ÁREA DO TRIÂNGULO
    printf("Area do triangulo: %.2f\n", area);  // MOSTRA A ÁREA DO TRIANGULO

    return 0;
}

/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMA��O

    ATIVIDADE PR�TICA
    SEMANA 02 / EXERC�CIO a

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATR�CULA: 2021/1

    <L� 3 VALORES E CALCULA A �REA DO TRI�NGULO SEGUINDO A F�RMULA DE HERON>
*/

#include<stdio.h>
#include<math.h>  // INCLUI FUN��ES MATEM�TICAS NO PROGRAMA

int main(){
    float a, b, c, s, area;  // DEFINI��O DAS VARI�VEIS

    printf("Informe os lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;  // C�LCULO DO SEMI-PER�METRO
    area = sqrt(s * (s - a) * (s - b) * (s - c));  // C�LCULO DA �REA DO TRI�NGULO
    printf("Area do triangulo: %.2f\n", area);  // MOSTRA A �REA DO TRIANGULO

    return 0;
}

/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 04 / EXERCÍCIO a

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <LÊ UM CÓDIGO E 3 NÚMEROS E REALIZA UMA OPERAÇÃO CORRESPONDENTE AO CÓDIGO INFORMADO.>
*/
#include<stdio.h>
#include<math.h>

int main(){
    char i;    //DECLARAÇÃO DE VARIÁVEIS
    float a, b, c, trapezio, delta, raiz1, raiz2, mediageo, contador, somaint;

    printf("A - Area do trapezio\n");
    printf("B - Equacao do segundo grau\n");    //MENU DE CÓDIGO E SUAS OPERAÇÕES
    printf("C - Media Geometrica\n");
    printf("D - Soma do Intervalo\n\n");

    printf("Informe o codigo i: ");    //PEDE O CÓDIGO
    scanf("%c", &i);
    printf("Entre com os valores a, b e c: ");  //PEDE OS NÚMEROS
    scanf("%f %f %f", &a, &b, &c);

    trapezio = ((a + b) * c) / 2;  //CÁLCULO DO TRAPÉZIO
    delta = pow(b, 2) - (4 * a * c);  //CÁLCULO DO DELTA
    mediageo = pow(a * b * c, 1.0/3.0);  //CÁLCULO DA MÉDIA GEOMÉTRICA

    contador = a;

    for (contador = a ; contador < b; contador = contador + c) {
        somaint += contador;
    }


    if (delta > 0) {    //DEFINE AS RAÍZES DA EQUAÇÃO DE SEGUNDO GRAU, SE EXISTIREM
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
    }

    if (a > b){
        printf("Valores inconsistentes!\n");
    }

    if (a < b && a > 0 && b > 0 && c > 0) {
        switch (i) {
        case 'a':
        case 'A': printf("A area do trapezio de bases %.0f e %.0f, com altura %.0f eh: %.1f\n", a, b, c , trapezio);
            break;
        case 'b':
        case 'B': printf("A equacao %.0fx^2 + %.0fx + %.0f = 0 possui duas raizes: %.2f e %.2f\n", a, b, c, raiz1, raiz2);
            break;
        case 'c':
        case 'C': printf("A media geometrica dos valores [%.0f, %.0f, %.0f] eh: %.2f\n", a, b, c, mediageo);
            break;
        case 'd':
        case 'D': printf("A soma dos valores de %.0f ate %.0f (de %.0f em %.0f) eh %.0f\n", a, b, c, c, somaint);
            break;
            default: printf("O codigo informado eh invalido!\n");

    }
    }

    return 0;
}

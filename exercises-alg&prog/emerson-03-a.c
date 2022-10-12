/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 03 / EXERCÍCIO a

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <DESCRIÇÃO DO PROGRAMA>
*/
#include<stdio.h>

int main() {
    float AP1, AP2, TF, MF, REC, AposREC;
    printf("nota AP1 do aluno: ");
    scanf("%f", &AP1);
    printf("nota AP2 do aluno: ");
    scanf("%f", &AP2);
    printf("nota TF do aluno: ");
    scanf("%f", &TF);
    MF = AP1 * 0.35 + AP2 * 0.45 + TF * 0.20;
    AposREC = (MF + REC) / 2;
    if (MF >= 8.5){
        printf("O aluno foi aprovado com nota %.1f e conceito A", MF);
    } else if (MF >= 7.5 && MF < 8.5) {
        printf("O aluno foi aprovado com nota %.1f e conceito B", MF);
    } else if (MF >= 6 && MF < 7.5) {
        printf("O aluno foi aprovado com nota %.1f e conceito C", MF);
    } else if(MF  < 6) {
        printf("Nota da Recuperacao: ");
        scanf("%f", &REC);
        if (AposREC >= 6) {
            printf("O aluno foi aprovado apos a recuperacao com media %.1f e conceito C", AposREC);
        } else {
            printf("O aluno reprovou, com media %.1f e conceito D", AposREC);
        }
    }

    return 0;
}

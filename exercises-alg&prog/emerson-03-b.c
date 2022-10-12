/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 03 / EXERCÍCIO B

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <DESCRIÇÃO DO PROGRAMA>
*/
#include<stdio.h>

int main() {
    int GolI1, GolI2, GolI3, GolG1, GolG2, GolG3, InPontos, GrPontos;
    printf("Informe o numero de gols do Internacional na primeira partida: ");
    scanf("%d", &GolI1);
    printf("Informe o numero de gols do Gremio na primeira partida: ");
    scanf("%d", &GolG1);
    printf("Informe o numero de gols do Internacional na segunda partida: ");
    scanf("%d", &GolI2);
    printf("Informe o numero de gols do Gremio na segunda partida: ");
    scanf("%d", &GolG2);
    if (GolI1 == GolG1) {
        InPontos = 1;
        GrPontos = 1;
    } else if (GolI1 > GolG1) {
        InPontos = 3;
        GrPontos = 0;
    } else if (GolI1 < GolG1) {
        InPontos = 0;
        GrPontos = 3;
    }
    if (GolI2 == GolG2) {
        InPontos += 1;
        GrPontos += 1;
    } else if  (GolI2 > GolG2) {
        InPontos += 3;
        GrPontos += 0;
    } else if (GolI2 < GolG2) {
        InPontos += 0;
        GrPontos += 3;
    }
    printf("\nPontuacao Final: \n");
    printf("Internacional: %d pontos\n", InPontos);
    printf("Gremio: %d pontos\n", GrPontos);
    if (InPontos > GrPontos) {
        printf("\nO Vencedor: INTERNACIONAL!\n");
    } else if (InPontos < GrPontos) {
        printf("\nO Vencedor: GREMIO!\n");
    } else if (InPontos == GrPontos) {
        printf("\nEMPATE! TEREMOS UM TERCEIRO JOGO!\n\n");
        printf("Informe o numero de gols do Internacional na terceira partida: ");
        scanf("%d", &GolI3);
        printf("Informe o numero de gols do Gremio na terceira partida: ");
        scanf("%d", &GolG3);
        if (GolI3 > GolG3) {
            printf("\nO Vencedor: INTERNACIONAL!\n");
        } else if (GolI3 < GolG3) {
            printf("\nO Vencedor: GREMIO!\n");
        }
    }

    return 0;
}

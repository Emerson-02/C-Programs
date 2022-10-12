/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 11 / EXERCÍCIO A

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <LÊ AS INFORMAÇÕES DE UMA COMPRA, DIZ A QUANTIDADE DE ITENS COMPRADOS E O VALOR TOTAL DA COMPRA, E ENTÃO, DEVOLVE OS DADOS DA COMPRA DE CADA CLIENTE>
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// ESTRUTURA ITEM
typedef struct {
    char nomeProduto[20];
    int quantidadeComp;
    float valorUnitario;
} item;

// ESTRUTURA COMPRA
typedef struct {
    char nomeCliente[30];
    float valorTotal;
    item f1[5];
    int quantidade;
} compra;

// LIMPA O BUFFER
void limpa_buffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
    }

// FUNÇÃO LE
void le(compra *a){
    char b, c, ret;
    float total;
    printf("Informe o nome do cliente: ");
    fgets(a->nomeCliente, 30, stdin);
    a->nomeCliente[strlen(a->nomeCliente)-1] = '\0';
    printf("== LISTA DE PRODUTOS ==\n");
    do {
        printf("Informe o nome do produto: ");
        fgets(a->f1->nomeProduto, 20, stdin);
        a->f1->nomeProduto[strlen(a->f1->nomeProduto)-1] = '\0';
        ret = strcmp(a->f1->nomeProduto, "FIM");
        if(ret != 0){
            printf("Informe a quantidade de itens comprados: ");
            scanf("%d", &a->f1->quantidadeComp);
            printf("Informe o preco unitario do produto: ");
            scanf("%f", &a->f1->valorUnitario);
            limpa_buffer();
            printf("\n");
            total = a->f1->quantidadeComp * a->f1->valorUnitario;
            a->valorTotal += total;
            a->quantidade += 1;
        }
    } while(ret != 0);
    printf("Itens Comprados: %d", a->quantidade);
    printf("\nTOTAL: %.2f", a->valorTotal);
    printf("\n\n");
}

int main() {
    compra fs[5] = {0};
    int i, j;
    // LE OS DADOS DA COMPRA DE CADA CLIENTE
    for (i = 0; i < 2; i++){
        le(&fs[i]);
    }
    // MOSTRA OS DADOS DE CADA CLIENTE
    for (i = 0; i < 5; i++){
        printf("---------------------------------------------\n");
        printf("Cliente: %s\n", fs[i].nomeCliente);
        printf("Total: R$%.2f\n", fs[i].valorTotal);
        printf("---------------------------------------------\n");
        for(j = 0; j < fs[i].quantidade; j++)
             printf("ITEM %d Produto: %s Quantidade: %d Preco Unitario: R$%.2f\n", j+1, fs[i].f1[j].nomeProduto, fs[i].f1[j].quantidadeComp, fs[i].f1[j].valorUnitario);
            j++;
    }
    return 0;
}

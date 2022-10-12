#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void deriva (double* poli, int grau, double* out);


int main(){





   // printf("Informe o componente x^%d: ");
   // printf("");
   // printf("");

    return 0;
}



void deriva (double* poli, int grau, double* out){
    int i;
    int b;
    //double*poli = NULL;
    //double*out = NULL;
    printf("Informe o grau do polinomio: ");
    scanf("%d", &grau);

    if(grau >= 1 && grau <= 9){
        for(i = grau; i >=0; i--){
            printf("Informe o componente x^%lf: ", poli[i]);
            scanf("%lf", &b);
            *poli = b;
        }
    }

}

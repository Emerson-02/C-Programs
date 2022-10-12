#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
    int x, y, i, soma = 1;
    printf("Informe os dois numeros: ");
    scanf("%d %d", &x, &y);


        for(i = 2; i < 10; i++){
            soma = 1;
            if(x % i == 0 && y % i == 0){
                x = x / i;
                y = y / i;
                soma *= i;
            }
            else if(x % i == 0 && y % i == 1){
                x = x / i;
                soma *= i;
            }
            else if(x % i == 1 && y % i == 0){
                y = y / i;
                soma *= i;
            }
            printf("%d", soma);
        }


    printf("MMC = %d", soma);

    return 0;
}

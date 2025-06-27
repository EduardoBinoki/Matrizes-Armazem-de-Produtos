#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

int i,j;
int armazem[3][4];
char produto[3][30];
float custo[3];
float soma_armazem[4];
float soma_produto[3];

for(i=0;i<3;i++){

    printf("\nDigite o nome do produto: ");
    scanf("%s",&produto[i]);
    printf("Digite o custo do produto: ");
    scanf("%f",&custo[i]);
    fflush(stdin);

    for(j=0;j<4;j++){
        printf("Quantidade no armazem: ");
        scanf("%d",&armazem[i][j]);
    }

}
 for (j=0;j<4;j++) {
        soma_armazem[j]=0;
        for (i=0;i<3;i++) {
            soma_armazem[j] += armazem[i][j];
        }
    }
 for(i=0;i<3;i++) {
        soma_produto[i]=0;
        for(j=0;j<4;j++) {
            soma_produto[i] += armazem[i][j]*custo[i];
        }
    }

  printf("\n--- Totais por Armazem ---\n");
    for (j = 0; j < 4; j++) {
        printf("Armazem %d: %.0f itens\n", j + 1, soma_armazem[j]);
    }

    printf("\n--- Custo Total por Produto ---\n");
    for (i = 0; i < 3; i++) {
        printf("Produto %s: R$ %.2f\n", produto[i], soma_produto[i]);
    }






}

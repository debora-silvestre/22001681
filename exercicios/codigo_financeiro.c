//código do aplicativo financeiro

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float receita, despesas, saldo;
    printf("\ninforme o valor da receita:");
    scanf("%f", &receita);
    printf("\ninforme o valor total das despesas:");
    scanf("%f", &despesas);
    saldo = receita - despesas;
    printf("\nseu saldo:%f", saldo);
    return(0);
}


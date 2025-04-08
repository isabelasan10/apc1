#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant1Sem;
    int quant2Sem;
    int sum;
    printf("Entre com a quantidade de alunos do primeiro semestre: ", quant1Sem);
    scanf("%d", &quant1Sem);
    printf("Entre com a quantidade de alunos do segundo semestre: ", quant2Sem);
    scanf("%d", &quant2Sem);
    sum = quant1Sem + quant2Sem;
    printf("A soma dos alunos do primeiro e segundo semestre: %d", sum);
    return 0;
}

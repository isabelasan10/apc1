#include <stdio.h>
#include <stdlib.h>

// Uma firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de 
// um novo produto lançado no mercado. Para isso forneceu o sexo do entrevistado e sua 
// resposta (S – Sim ou N – Não). Sabe-se que foram entrevistadas algumas pessoasl. Faça um 
// programa que calcule e mostre:
// • O número de pessoas que respondeu sim;
// • O número de pessoas que respondeu não;
// • O número de mulheres que respondeu sim;
// • A percentagem de homens que respondeu não entre todos os homens analisados.

int main() { 
    int numPessoas, numPessoasS = 0, numPessoasN = 0, numMulheresS = 0, numHomensTotal = 0, numHomensN = 0;
    float porcHomensN = 0;
    char sexo, respProduto, respContinuar;
    printf("Voce deseja inserir mais um pessoas?: ");
    scanf("%c", &respContinuar);
    while(respContinuar == 'S'){
        printf("Insira o sexo da pessoas: \n");
        scanf("%c", &sexo);
       
        printf("O cliente gostou do produto?: \n");
        scanf("%c", &respProduto);
        
        if(respProduto == 'S'){
            numPessoasS++;
        } else if(respProduto == 'N'){
            numPessoasN++;
        }
        if(sexo == 'F' && respProduto == 'S'){
            numMulheresS++;
        }
        if(sexo == 'M'){
            numHomensTotal++;
        }
        if(sexo == 'M' && respProduto == 'N'){
            numHomensN++;
        }
        printf("Voce deseja inserir mais um pessoas?: \n");
        scanf("%c", &respContinuar);
    } 
    printf("\nO numero de pessoas que respondeu sim: %d", numPessoasS);
    
    printf("\n O numero de pessoas que respondeu nao: %d", numPessoasN);
    
    printf("\n O numero de mulheres que respondeu sim: %d", numMulheresS);
    
    porcHomensN = (numHomensN * 100)/numHomensTotal;
    printf("\n A percentagem de homens que respondeu nao entre todos os homens analisados: %d", porcHomensN);
    return 0; 
}
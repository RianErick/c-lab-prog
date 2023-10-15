#include <stdio.h>

//5. Um vendedor necessita de um programa que calcule o preço total devido por um cliente. O programa deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo. Mostrar uma mensagem no caso de código inválido.
//Código Produto Preço Unitário
//1001 R$ 5,32
//1324 R$ 6,45
//6548 R$ 2,37
//987 R$ 5,32
//7623 R$ 6,45

int main(void) {
  int cod_produto, quant;
  float preco_uni, preco_t;
  
  printf("Informe o código do produto: ");
  scanf("%d", &cod_produto);

    printf("Informe a quantidade comprada: ");
    scanf("%d", &quant);
    
    if (cod_produto == 1001) {
      preco_uni = 5.32;
    } else if (cod_produto == 1324) {
        preco_uni = 6.45;
    } else if (cod_produto == 6548) {
        preco_uni = 2.37;
    } else if (cod_produto == 987) {
        preco_uni = 5.32;
    } else if (cod_produto == 7623) {
        preco_uni = 6.45;
    } else {
        printf("Código de produto inválido!\n");
        return 1; // Saída do programa com código de erro
    }
    
    preco_t = preco_uni * quant;
    
    printf("O Preço total devido: R$ %.2f\n", preco_t);

    return 0;
}
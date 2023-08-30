#include <stdio.h>

//3.Lê um número e mostra seu sucessor e seu antecessor na tela.

int main(){

    int n1 , sucessor , antecessor;

    printf("%s " , "Digite um Numero Inteiro");
    
    scanf("%d \n" , &n1);

    sucessor = n1 + 1;
    antecessor = n1 - 1;

    printf(" Sucessor : %d \n" , sucessor);

    printf(" Antecessor : %d \n" , antecessor);


    return 0;
  
}
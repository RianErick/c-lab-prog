#include <stdio.h>

int main(){

int n1 ,n2 ,n3 , media;

printf("%s \n" , "Digite 3 Numeros! ");

printf("%s \n" , "Numero 1 - ");
scanf("%d" , &n1);

printf("%s \n" , "Numero 2 - ");
scanf("%d" , &n2);

printf("%s \n" , "Numero 3 - ");
scanf("%d" , &n3);

media = (n1 + n2 + n3) / 3 ;

printf("   Media : %d \n" , media );
return 0;

}
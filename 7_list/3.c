#include <stdio.h>
#include <string.h>

int main(void) {
  char palavra[21];
  int i, vogais = 0;

  printf("Informe uma palavra (máximo 20 caracteres): ");
  scanf("%s", palavra);
  
  for(i = 0; i < strlen(palavra); i++) {
    if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
    palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O'
    palavra[i] == 'U') {
      vogais++;
   }
  }
  
  printf("Número de vogais na palavra: %d\n", vogais);
return 0;
}
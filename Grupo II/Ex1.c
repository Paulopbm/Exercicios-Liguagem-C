/* 1_ Fa�a um programa em "C" que l� dois valores e imprime:
 
 - se o primeiro valor for menor que o segundo, a lista de valores do primeiro at�
o segundo;
 - se o primeiro valor for menor que o segundo a lista de valores do segundo at�
o primeiro em ordem decrescente;
 - se ambos forem iguais a mensagem "valores iguais */


#include <stdio.h>

void main() {
      
	   int primeiro_valor;
       int segundo_valor;
       int i, passo;

      printf("Por favor informe o primeiro valor ");
      scanf("%i",&primeiro_valor);
      printf("Por favor informe o segundo valor");
      scanf("%i",&segundo_valor);
  
  if (primeiro_valor == segundo_valor){
    printf("valores iguais\n");
 }else {
  if (primeiro_valor < segundo_valor) {
    printf("O primeiro valor � menor que o segundo \n");
  for(i=primeiro_valor;i<=segundo_valor;i++){
      printf("%i \n",i);
    };
    
  } else {
    printf("O segundo valor � menor que o primeiro\n");
  for(i=primeiro_valor;i>=segundo_valor;i--){
      printf("%i \n",i);
    };
  };
};
}


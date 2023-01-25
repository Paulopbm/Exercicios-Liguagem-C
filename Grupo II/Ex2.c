/* 2_ Fazer um programa que imprime a tabela ASCII (código decimal, código hexa,
caracter) para os códigos de 0 a 127 */
      
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a=0;
    printf("IMPRIMINDO TABELA ASCII\n");
    for(a=1;a<127;a++)
    printf("Decimal: %i  Hexadecimal: %x   Caractere: %c \n",a,a,a,a);
    //Obs: %i imprime iteiro, %x imprime Hexadecimal, %c imprime caractere char
    printf("\n\t\tFIM\n\n");
system("pause");
}

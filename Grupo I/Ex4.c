/* 4_ Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
imprime no v�deo o correspondente em graus Celsius usando as f�rmulas que
seguem.
 
a) Usar uma vari�vel double para ler o valor em Fahrenheit e a f�rmula
 C=(f-32.0) * (5.0/9.0).
b) Usar uma vari�vel int para ler o valor em Fahrenheit e a f�rmula
 C=(f-32)*(5/9) */

#include <stdio.h>
#include <stdlib.h>

int main(){

    float C;
    int F,c;

    printf("Informe um valor de Fahrenheit para converter para Celsius: ");
    scanf("%d",&F);

        C = (F - 32.0) * (5.0 / 9.0);
        c = (F - 32) * (5 / 9);

    printf("Celsius(Valor decimal): %2.f\n",C);
    printf("Celsius(Valor inteiro): %d\n",c);

    system("PAUSE");
    
	return 0;
}

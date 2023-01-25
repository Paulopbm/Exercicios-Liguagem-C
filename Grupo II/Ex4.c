/*  4_Fazer um programa que lê um valor, um operador (+,-,*,/) e outro valor e
imprime o resultado da expressão:
 <valor 1> <operador> <valor 2> */

#include <stdio.h>


int main()
{
     int escolha ;
     int n1;
     int n2 ;
     int multi;
     int soma ;
     int sub ;
     int divi;

   printf (" Qual operacao deseja realizar \n 1.Multiplicacao \n 2.Soma \n 3.Subtracao \n 4.Divisao \n");
      scanf("%i", &escolha);

      if (escolha == 1 ){
       
	printf (" Digite o valor do primeiro numero \n");
      scanf("%i", & n1);

    printf (" Digite o valor do segundo  numero \n");
      scanf("%i", & n2);

      multi = n1 * n2 ;

    printf ("O Resultado da multiplicacao de %i * %i = %i",n1 , n2 ,multi);

   }

      else if (escolha == 2 ){

    printf (" Digite o valor do primeiro numero \n");
      scanf("%i", & n1);

    printf (" Digite o valor do segundo  numero \n");
       scanf("%i", & n2);

      soma = n1 + n2 ;

    printf ("O Resultado da soma e %i + %i = %i",n1,n2,soma);

   }

      else if (escolha == 3 ){

    printf (" Digite o valor do primeiro numero \n");
      scanf("%i", & n1);

    printf (" Digite o valor do segundo  numero \n");
      scanf("%i", & n2);

      sub = n1 - n2 ;

    printf ("O Resultado da subtracao e %i - %i = %i",n1,n2,sub);

   }

else if (escolha == 4 ){

    printf (" Digite o valor do primeiro numero \n");
      scanf("%i", & n1);

    printf (" Digite o valor do segundo  numero \n");
      scanf("%i", & n2);

      divi = n1 / n2 ;

      printf ("O Resultado da divisao de %i / %i = %i",n1,n2, divi);

   }

   return 0;

}

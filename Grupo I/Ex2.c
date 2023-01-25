// 2_Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

#include <stdio.h>


  main (void){

          
  int i, j;
    
	for (i = 1; i <= 9; i = i + 1)
    {
    for (j = 1; j <= 9; j = j + 1)
        printf("%2d x %2d = %3d\n", j, i, i * j);
        printf("\n");
     }
    
	return 0;


}

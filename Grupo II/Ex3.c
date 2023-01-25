/* 3_ Fazer um programa em "C" que lê o preço de um produto e inflaciona esse
preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a
100 */

#include <stdio.h>

      int main(){
      float preco;

    printf("Entre com o preco do produto.\n\n");
    scanf("%f",&preco);


    if(preco < 100){
       preco = preco * 1.1;

    }else{
       preco = preco * 1.2;

    }

printf("Preco inflacionado : %.2f",preco);

return (0);

}


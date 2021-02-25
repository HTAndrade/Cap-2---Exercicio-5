#include <stdio.h>
#include<math.h>
#include<locale.h>

/*
5 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.
*/

int main()
{
    int a,b=0,c=0;

    do{
        printf("Digite um numero: ");
        scanf("%d",&a);

        if(a>0)
        {
            b+= a;
            c++;
        }
    }while(a>0);

    b=b/c;
    printf("A media dos %d numeros digitados eh %d",c,b);
}
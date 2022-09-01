/*Escrever um algoritmo que
obtenha o peso de uma pessoa na Terra e o
número de um planeta. Ao final, com auxílio da
tabela abaixo, calcular o peso desta pessoa no
planeta escolhido.

Número Planeta     Gravidade Relativa g
1      Mercúrio          0,37
2      Vênus             0,88
3      Marte             0,38
4      Júpiter           2,64
5      Saturno           1,15
6      Urano             1,17

Para calcular o peso no planeta escolhido,
utilize a seguinte fórmula:
pesoPlaneta = (pesoTerra/10) * gravidadePlaneta

*/

#include <stdio.h>
void main ()
{
  int nr, pesoPlaneta, pesoTerra;

    printf("Número Planeta     Gravidade Relativa g");
    printf("\n1      Mercúrio          0,37");
    printf("\n2      Vênus             0,88");
    printf("\n3      Marte             0,38");
    printf("\n4      Júpiter           2,64");
    printf("\n5      Saturno           1,15");
    printf("\n6      Urano             1,17");
    printf("\nDigite o numero de um planeta: ");
    scanf ("%d", &nr);
    printf("Digite seu peso:");
    scanf("%d", &pesoTerra);

  switch (nr)
  {
   case 1:
     pesoPlaneta = (pesoTerra/10) * 0.37;
     printf("\nSeu peso em Mercurio seria: %d\n", pesoPlaneta);
   break;

   case 2:
    pesoPlaneta = (pesoTerra/10) * 0.88;
    printf("\nSeu peso em Venus seria: %d\n", pesoPlaneta);
   break;

   case 3:
    pesoPlaneta = (pesoTerra/10) * 0.38;
    printf("\nSeu peso em Jupiter seria: %d\n", pesoPlaneta);
   break;

   case 4:
    pesoPlaneta = (pesoTerra/10) * 2.64;
    printf("\nSeu peso em Jupiter seria: %d\n", pesoPlaneta);
   break;

   case 5:
    pesoPlaneta = (pesoTerra/10) * 1.15;
    printf("\nSeu peso em Saturno seria: %d\n", pesoPlaneta);
   break;

   default:
    pesoPlaneta = (pesoTerra/10) * 1.17;
    printf("\nSeu peso em Saturno seria: %d\n", pesoPlaneta);
  }
}
